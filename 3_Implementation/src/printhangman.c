/**
 * @file printhangman.c
 * @author Akash Ranjan (https://github.com/vatsaakash/)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#define pf printf

/**
 * @brief 
 * 
 * @param life 
 */

//print the hangman with a new limb after each wrong guess
void printhangman(int life)
{
	switch(life)
	{
		case 9 :
			pf("________\n");
			pf("|   |\n");
			pf("|\n");
			pf("|\n");
			pf("|\n");
			pf("|\n");
			pf("+------\n");
			break;

		case 8 :
			pf("________\n");
			pf("|   |\n");
			pf("|   0\n");
			pf("|\n");
			pf("|\n");
			pf("|\n");
			pf("+------\n");
			break;

		case 7 :
			pf("____\n");
			pf("|   |\n");
			pf("|   0\n");
			pf("|   |\n");
			pf("|\n");
			pf("|\n");
			pf("+------\n");
			break;

		case 6 :
			pf("________\n");
			pf("|   |\n");
			pf("|   0\n");
			pf("|  /|\n");
			pf("|\n");
			pf("|\n");
			pf("+------\n");
			break;

		case 5 :
			pf("________\n");
			pf("|   |\n");
			pf("|   0\n");
			pf("|  /|\\\n");
			pf("|\n");
			pf("|\n");
			pf("+------\n");
			break;

		case 4 :
			pf("________\n");
			pf("|   |\n");
			pf("|   0\n");
			pf("|  /|\\\n");
			pf("|  /\n");
			pf("|\n");
			pf("+------\n");
			break;

		case 3 :
			pf("________\n");
			pf("|   |\n");
			pf("|   0\n");
			pf("|  /|\\\n");
			pf("|  / \\\n");
			pf("|\n");
			pf("+------\n");
			break;

		case 2 :
			pf("________\n");
			pf("|   |\n");
			pf("|   0\n");
			pf("|  /|\\\n");
			pf("|  / \\_\n");
			pf("|\n");
			pf("+------\n");
			break;

		case 1 :
			pf("________\n");
			pf("|   |\n");
			pf("|   0\n");
			pf("|  /|\\\n");
			pf("| _/ \\_\n");
			pf("|\n");
			pf("+------\n");
			break;

		case 0 :
			pf("________\n");
			pf("|   |\n");
			pf("|   x\n");
			pf("|  /|\\\n");
			pf("| _/ \\_\n");
			pf("|\n");
			pf("+------\n");
			break;
	}
}

