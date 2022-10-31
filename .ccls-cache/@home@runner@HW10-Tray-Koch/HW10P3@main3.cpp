/***********************************************************************
Programmer: Tray Koch
Date Modified: 10/27/2022
Description: This program was written to solve the Kattis problem Greedily Increasing Subsequence. This code must take in a permutation of a list of values. Then, the GIS values must be calculated.
***********************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//prototype functions
void fillArray(int list[], int listSize);

int main()
{
  //read in length of permutation
  int a;
  cin >> a;

  //set up array to capture input sequence
  const int N = a;
  int permutationA[N]; //array to store sequence

}

//user-defined functions

//function to fill array
void fillArray(int list[], int listSize)
{
  cout << "Enter" << listSize << " integers: "; //comment out for Kattis

  int index;

  for(index = 0; index < listSize; index++)
    {
      cin >> list[index];
    }

  return;
}
