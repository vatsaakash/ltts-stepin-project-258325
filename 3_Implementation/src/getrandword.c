/**
 * @file getWord.c
 * @author Akash Ranjan (https://github.com/vatsaakash/)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "getrandword.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/**
 * @brief Get the Word object
 * 
 * @return char* 
 */

//returns a random word from a text file

char* getrandword()
{
	//open the text file in read mode with the list of words
	FILE *wordList;
	wordList = fopen("wordlist.txt", "r");

	int rng = 0;
	char ltr;

	//get the number  of words in the file
	while((ltr = getc(wordList)) != EOF)
	{
		if(ltr == '\n')
			rng++;
	}

	//get a random number within the rng of 1 to the amount of words in the file to be used as the index for a word
	srand(time(0));
	int rindex = (rand()%(rng+1));

	wordList = fopen("wordlist.txt", "r");

	int plc = 1;
	int i = 0;
	
	//allocate memory for the word
	char* ptrwrd = (char*)malloc(100*sizeof(char));
	memset(ptrwrd, '\0', sizeof(ptrwrd));

	//read throught the text file and store the indexed word
	while((ltr = getc(wordList)) != EOF)
	{
		//if file has reached the index start populating the word string
		if(plc == rindex && ltr != '\n')
		{
			ptrwrd[i] = ltr;
			strcat(ptrwrd, "\0");
			i++;
		}

		//increment plc when we go to  a new line
		if(ltr == '\n')
		{
			plc++;
		}

		// exit loop once we have passed the index(random) i.e rindex
		if(plc > rindex)
		{
			break;
		}
	}

	//close the text file using fclose
	fclose(wordList);

	//return pointertoword
	return ptrwrd;
}
