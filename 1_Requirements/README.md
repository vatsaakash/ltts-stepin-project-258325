# Requirements
## Introduction
 - This is a command line interface game. The name of the game is Hangman.
 - In this game you get to guess a random word which is generated from a wordlist.
 -- If you guess it right then you win
 -- else the Hangman character dies and you loose.
 - User gets 9 attempt to make wrong guess.



## SWOT ANALYSIS

### S - Strength
* Works in all kind of OS.
* Easy to Play.

### W - Weakness
* It's in command Line

### O - Opportunity
* We can make it's GUI.
* We can give hints to the user.

### T - Threat
* Using file Handling makes it a bit slower. 

# 4W&#39;s and 1&#39;H

## Who:

* Anyone who thinks that working all day is monotonous and He/She needs some refreshment can play this game.
* Anyone who wants to improve english vocabulary can play this game and try to guess the correct word.

## What:

* This is a game which reads a random word from the wordlist, and asks the user the guess it correctly so that the User win the game otherwise the User looses after a specific number of trials.

## When:

* Whenever you feel tiresome.
* Whenever you think you should play you can play.

## Where:

* It runs quiet well on any PC.

## How:

* Users can Play this game by running its exe or by running the makefile and the a CLI screen opens with the prompt.
* There the instructions are clearly mentioned.

#### High Level Requirements:
| ID | Description | Status|
| ---- | ---- | ---- |
| HLR01| Using Word list | Implementated |
| HLR02 | Taking the input | Implemented |
| HLR03 | After every wrong input show the Hangman Hanging | Implemented |


#### Low Level Requirements:
| ID | Description | Status|
| ---- | ---- | ---- |
| LLR01| If the word has already guessed tell the user that its already guessed | Implemented |
