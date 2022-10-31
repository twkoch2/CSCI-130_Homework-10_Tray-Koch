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
int findNumOfUniqueCharInStr(string myString);

///////////Main///////////
int main()
{
  //take in first string (word to be guesed)
  const int MaxLength = 17; //need space for trailing null
  char Word[MaxLength] = {'\0'};  //create matrix and initalize
  cin >> Word;
  //printArray(Word, MaxLength); // comment out for Kattis
  


  //read in second string of letters (guessing order)
  const int GuessLength = 27;
  char GuessOrder[GuessLength];
  cin >> GuessOrder; //array will be filled
  //printArray(GuessOrder, GuessLength);  //comment out for Kattis

  //use a function to compare the two matricies
  int failCount = 0; //will be a counter used to detmine winner
  int foundCount = 0; //counter for found values

  //use a function to find the number of distince characters
  int distinct = findNumOfUniqueCharInStr(Word);
  
  for (int i = 0; i < GuessLength; i++)
  {
    int result; //used to create if statement and translate result
    
    result = seqSearch(Word, MaxLength, GuessOrder[i]);

    if (foundCount == distinct)
      i = GuessLength + 2; //kicks out of for loop

    if (result == 1)
      foundCount++;

    if (result == 0)
      failCount++;
  }
    

  if (failCount <= 10)
    cout << "WIN" << endl;
  else
    cout << "LOSE" << endl;
  
  return 0;
  }


//////////user defined functions/////////////

//modified seq search from MyArrayFunctions
int seqSearch(char list[], int listSize, char searchItem)
{
  int loc = 0; // start with 1st spot
  bool found = false; //we have not found it yet
  int i; ///value to return

  while( (loc < listSize) && (!found))
  {
    
    if(list[loc] == searchItem)
    {
      found = true; //kicks you out of loop
      i = 1;
    }
      

    if (list[loc] == '\0')
    {
      found = true; //kicks you out of loop
      i = 0;
    }
    
    else
      loc++;
  }

  return i;
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

//code from hint function on D2L

// find the unique values in a string
int findNumOfUniqueCharInStr(string myString) 
{
  const int L = myString.length();

  char unique[L]; // set all to NULL

  int n, k;

  // setup unique to store the first value of the string and then

  // all NULLs

  unique[0] = myString[0];

  // initialize all other spots in unique to be NULL aka '\0'

  for (n = 1; n < L; n++) 
  {
    unique[n] = '\0';
  }

  int j = 1;

  bool FLAG;

  // fill unique

  for (n = 1; n < L; n++) 
  {
    FLAG = false; // meaning it does not exist

    for (k = 0; k < L; k++) {

      if (myString[n] == unique[k]) // then found it does exist
        FLAG = true;
    }

    // if it didn't exist we will add it in to unique

    if (FLAG == false) 
    {
      unique[j] = myString[n];

      j++;
    }
  }

  return j;
}