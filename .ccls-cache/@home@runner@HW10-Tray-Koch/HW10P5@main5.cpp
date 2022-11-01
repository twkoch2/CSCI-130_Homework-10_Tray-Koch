/***********************************************************************
Programmer: Tray Koch
Date Modified: 11/1/2022
Description: This program was written to solve the Bronson Chapter 10 Programming Projects. This is desk check Exercise 6. Solve part b. Is the notation val[1][2] valid in the function?
***********************************************************************/

//part a
/*
  The output of the following program is the following:
33
16
99
34
The first output is 33 because the command *(*val) pulls from the 0,0 position in the array. The next output is 16 because this *(*val+1) pulls from the position row 0, column 1. The next output is 99. This is because *(*(val+1) + 2) moves over 2 columns and moves down a row from row 0 to row 1. This pulls an answer from the location [1][2] which is 99. Fianlly, the final value is 34 because it pulls data from the [0][0] location of the array and adds 1 to the answer because of the +1 which is outside the parerntheses surrounding val.

*/
#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 3;
void arr(int [] [COLS]);

int main()
{
  int nums[ROWS][COLS] = { {33,16,29}, {54,67,99}};
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