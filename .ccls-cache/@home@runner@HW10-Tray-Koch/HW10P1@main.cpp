/***********************************************************************
Programmer: Tray Koch
Date Modified: 10/27/2022
Description: This program was written to solve the Kattis problem Hangman. This code takes in a word and a permutation of the alphabet which acts as the guessing string. This code must determine if the player will run out of guesses(10 allowed) before they solve the puzzle.
***********************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//////////Prototype Functions//////////
void fillArray(char list[], int listSize);
void printArray (char list[], int listSize);
int seqSearch(char list[], int listSize, char searchItem);

///////////Main///////////
int main()
{
  //take in first string (word to be guesed)
  const int MaxLength = 17; //need space for trailing null
  char Word[MaxLength] = {'0'};  //create matrix and initalize
  cin >> Word;
  //printArray(Word, MaxLength);// comment out for Kattis
  


  //read in second string of letters (guessing order)
  const int GuessLength = 27;
  char GuessOrder[GuessLength] = {'0'};
  cin >> GuessOrder; //array will be filled
  //cout << endl; //comment out for kattis
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

  while( (loc < listSize) && (!found) && (searchItem != '0') ) //modified to kick out when end of word is reached
  {
    if(list[loc] == searchItem)
      found = true; //kicks you out of loop
    
    else
      loc++;
  }

  if (found)
    return 1;

  else
  {
   // cout << "Item not found. " << endl;
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