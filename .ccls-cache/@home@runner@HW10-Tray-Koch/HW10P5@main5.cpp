/***********************************************************************
Programmer: Tray Koch
Date Modified: 10/26/2022
Description: This program was written to solve the Kattis problem Hangman. This code takes in a word and a permutation of the alphabet which acts as the guessing string. This code must determine if the player will run out of guesses(10 allowed) before they solve the puzzle.
***********************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//////////Prototype Functions//////////
void fillArray(char list[], int listSize);


///////////Main///////////
int main()
{
  //take in first string (word to be guesed)
  char Word[] = {'0'};  //create matrix and initalize


  //read in second string of letters (guessing order)
  const int GuessLength = 26;
  char GuessOrder[GuessLength] = {'0'};
  void fillArray(char GuessOrder, int GuessLength);

  //use a function to compare the two matricies
  

  
  
  






  return 0;
}


//user defined functions
void fillArray(char list[], int listSize)
{
  cout << "Enter" << listSize << " integers: "; //comment out for Kattis

  int index;

  for(index = 0; index < listSize; index++)
    {
      cin >> list[index];
    }

  return;
}