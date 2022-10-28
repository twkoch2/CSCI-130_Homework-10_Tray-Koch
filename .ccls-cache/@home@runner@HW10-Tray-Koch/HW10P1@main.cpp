/***********************************************************************
Programmer: Tray Koch
Date Modified: 10/27/2022
Description: This program was written to solve the Kattis problem Hangman. This code takes in a word and a permutation of the alphabet which acts as the guessing string. This code must determine if the player will run out of guesses(10 allowed) before they solve the puzzle.
***********************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//////////Prototype Functions//////////
void printArray (char list[], int listSize);
int seqSearch(char list[], int listSize, char searchItem);

///////////Main///////////
int main()
{
  //take in first string (word to be guesed)
  const int MaxLength = 17; //need space for trailing null
  char Word[MaxLength];  //create matrix and initalize
  cin >> Word;
  //printArray(Word, MaxLength); // comment out for Kattis
  


  //read in second string of letters (guessing order)
  const int GuessLength = 27;
  char GuessOrder[GuessLength];
  cin >> GuessOrder; //array will be filled
  //printArray(GuessOrder, GuessLength);  //comment out for Kattis

  //use a function to compare the two matricies
  int failCount = 0; //will be a counter used to detmine winner
  
  for (int i = 0; i < GuessLength; i++)
  {
    int result; //used to create if statement and translate result

    result = seqSearch(Word, MaxLength, GuessOrder[i]);

    if (result == 0)
      failCount++;
  }

  if (failCount < 10)
    cout << "WIN";
  else
    cout << "LOSE";
  
  return 0;
}


//////////user defined functions/////////////

//modified seq search from MyArrayFunctions
int seqSearch(char list[], int listSize, char searchItem)
{
  int loc = 0; // start with 1st spot
  bool found = false; //we have not found it yet

  while( (loc < listSize) && (!found))
  {
    
    if(list[loc] == searchItem)
      found = true; //kicks you out of loop

    if(list[loc] == '\000')
    {
      loc = listSize + 1; //way to exit the loop w/o affecting counter
    }
    
    else
      loc++;
  }

  if (found)
    return 1;

  else
  {
    return 0; 
  }
}

//print array to check inputs
void printArray (char list[], int listSize)
{
  int index;

  for (index = 0; index < listSize; index++)
  {
     cout << list[index] << " ";
    
  }
 
  cout << endl;
  return;
}