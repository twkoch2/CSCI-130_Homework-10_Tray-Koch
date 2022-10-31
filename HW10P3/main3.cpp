/***********************************************************************
Programmer: Tray Koch
Date Modified: 10/27/2022
Description: This program was written to solve the Kattis problem Greedily Increasing Subsequence. This code must take in a permutation of a list of values. Then, the GIS values must be calculated. The GIS is a list of ascending values from the initial permutation. 
***********************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//prototype functions
void fillArray(int list[], int listSize);
void printArray (const int list[], int listSize);
int numberOfGIS (int list[], int listSize);
void FinalGIS (int list[], int listG[], int listSize, int listSizeG);

int main()
{
  //read in length of permutation
  int a;
  cin >> a;

  //set up array to capture input sequence
  const int N = a;
  int permutationA[N]; //array to store sequence

  //fill array called permutationA
  fillArray(permutationA, N);

  //now search through array and create new array to compute GIS
  int b; //will be used to find length of array to be outputted to the console
  b = numberOfGIS(permutationA, N);
  const int M = b;

  //create an output array for the final answer
  int finalGIS[M];

  //use a function to fill the finalGIS array
  FinalGIS(permutationA, finalGIS, N, M);

  //use a function to print updated finalGIS array
  printArray(finalGIS, M);
  
  return 0;
}

//user-defined functions

//function to fill array
void fillArray(int list[], int listSize)
{
  //cout << "Enter" << listSize << " integers: "; //comment out for Kattis

  int index;

  for(index = 0; index < listSize; index++)
    {
      cin >> list[index];
    }

  return;
}

//print an array to the console
void printArray (int list[], int listSize)
{
  int index;

  for (index = 0; index < listSize; index++)
  {
     cout << list[index] << " ";
    
  }
 
  cout << endl;
  return;
}

int numberOfGIS (int list[], int listSize) //modified indexLargestElement function
{
  int GISCount = 1; //first value displayed
  int maxIndex = 0; 

  for (int index = 1; index < listSize; index++) //index is 1 since 1st integer always printed
  {
    if (list[maxIndex] < list[index])
    {
      maxIndex = index;
      GISCount++;
    }
      
  }

  return GISCount;
}

//function to create fina output array
void FinalGIS (int list[], int listG[], int listSize, int listSizeG) //modified indexLargestElement function and numberOfGTS function
{
  int GISCount = 1; //first value displayed
  int maxIndex = 0; 

  //hard code first location of listG to display first element of list
  listG[0] = list [0];
  

  for (int index = 1; index < listSize; index++) //index is 1 since 1st integer always printed
  {
    if (list[maxIndex] < list[index])
    {
      maxIndex = index;
      GISCount++;
    }
      
  }

  return;
}
