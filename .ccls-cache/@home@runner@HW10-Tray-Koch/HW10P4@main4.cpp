/***********************************************************************
Programmer: Tray Koch
Date Modified: 11/1/2022
Description: This program was written to solve the Bronson Exercises 10.3 Exercise 1. Replace the while statement with a for statement.
***********************************************************************/

#include <iostream>
using namespace std;

int main()
{  
  const int NUMS = 5;
  
  int nums[NUMS] = {16, 54, 7, 43, -5};
  int total = 0, *nPt;
  
  nPt = nums;    // store address of nums[0] in nPt  

  for (int i;i < NUMS; i++)
    total = total + *nPt++;

  /*
  while (nPt < nums + NUMS)
    total += *nPt++;
  */
  
  cout << "The total of the array elements is " << total << endl;
  
  return 0;
  }