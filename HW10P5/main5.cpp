/***********************************************************************
Programmer: Tray Koch
Date Modified: 11/1/2022
Description: This program was written to solve the Bronson Chapter 10 Programming Projects. This is desk check Exercise 6. Solve part b. Is the notation val[1][2] valid in the function?
***********************************************************************/

#include <iostream>

const int ROWS = 2;
const int COLS = 3;
void arr(int [] [COLS]);

int main()
{
  int nums[ROWS][COLS] = { {33,16,29},                    {54,67,99}};
  arr(nums);
  return 0;
}

void arr(int (*val) [3])
{
  cout << endl << *(*val);
  cout << endl << *(*val + 1);
  cout << endl << *(*(val + 1) + 2);
  cout << endl << *(*val) + 1;
  return;
}