/**
 * @file hangman.c
 * @author Akash Ranjan (https://github.com/vatsaakash/)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getrandword.h"
#include "printhangman.h"

#define LEN 100
define pf printf

//Clearing the screen according to the OS

void clearscr(){
    #if defined(__linux__) || defined(__unix__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
/**
 * @brief 
 * 
 * @param aint 
 * @param achar 
 * @return int 
 */

int main(int aint, char **achar)
{
	clearscr();

	pf("Welcome to Hangman!\n");
	
	char word[LEN];
	char finword[LEN];
	char sw[LEN] = "\0";

	//get a random word from wordlist using  getrandword()
	char* ptrToWord = getrandword();

	strcpy(word, ptrToWord);
	strcpy(finword, word);
	free(ptrToWord);

	//Creating a str, the len of the word to be guessed, using '_' symbol.
	int wordLen = LEN(word);


	for(int i=0; i<wordLen; i++)
	{
		sw[i] = '_';
		sw[i+1] = '\0';
	}

	char guess;
	char guessedLtrs[LEN] = "\0";
	char *ptrChar;

	int charIndex;
	int life = 9;

	pf("The secret word has %d letters\n", wordLen);
	pf("%s\n", sw);

	int foundltrs = 0;

	//loop  if the player still has lifes left
	while(life > 0)
	{
		//taking input
		pf("Guess a letter: ");
		guess = getchar();

		//discard any other input
		int c;

		while ((c = getchar()) != '\n' && c != EOF) { }

		ptrChar = strchr(word, guess);

		if(strchr(guessedLtrs, guess) != NULL)
		{
			//if already guesssed a letter

			pf("You have already guessed that letter\n\n");
			continue;
		}
		else
		{	
			//add guessed letters to string of guessed letters

			strncat(guessedLtrs, &guess, 1);
			strcat(guessedLtrs, "\0");
		}

		if(ptrChar == NULL)
		{
			//if guess is incorrect  decrement the life

			life--;
			pf("Wrong! %d guesses left\n", life);
			printhangman(life);
			pf("%s\n", sw);
			pf("\n\n");

			// if life ends
			
			if(life == 0)
			{
				pf("You Loose :(\n");
				pf("The Correct word was %s\n", finword);
			}
		}
		else
		{
			pf("You got a letter!\n");

			//if the guess is correct display the correctly guessed letter in every place it occurs in the word
			while((ptrChar = strchr(word, guess)) != NULL)
			{
				foundltrs++;

				int index1 = 0;
				int index2 = 0;
				char wrdp1[LEN] = "\0";
				char wrdp2[LEN] = "\0";
				char swp1[LEN] = "\0";
				char swp2[LEN] = "\0";
				char *ptrWord = word;
							
				index1 = ptrChar - ptrWord;
				index2 = index1 + 1;
					
				if(index1 == 0)	
				{
					wrdp1[0] = '\0';
					swp1[0] = '\0';
				}
				else
				{
					for(int a=0; a<index1; a++)
					{
						wrdp1[a] = word[a];
						wrdp1[a+1] = '\0';
						
						swp1[a] = sw[a];
						swp1[a+1] = '\0';
					}
				}
					
				int b = 0;
				if(index2 == LEN(word))	
				{
					wrdp2[0] = '\0';
					swp2[0] = '\0';
				}
				else
				{
					for(int a=index2; a<LEN(word); a++)
					{
						wrdp2[b] = word[a];
						swp2[b] = sw[a];
						b++;
						wrdp2[b] = '\0';
						swp2[b] = '\0';
					}
				}

				strcat(wrdp1, "_");
				strcat(wrdp1, wrdp2);
				strcpy(word, wrdp1);
				
				strncat(swp1, &guess,  1);
				strcat(swp1, swp2);
				strcpy(sw, swp1);
			}
			pf("%s\n\n", sw);
/**
 * @brief Construct a new if object
 * 
 */
			if(foundltrs == wordLen)
			{	
				//if all letters have been found
				pf("You Won!\n");
				break;
			}
		}
	}
}
