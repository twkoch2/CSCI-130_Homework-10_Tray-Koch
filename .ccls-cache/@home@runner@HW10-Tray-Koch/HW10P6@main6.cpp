/***********************************************************************
Programmer: Tray Koch
Date Modified: 11/1/2022
Description: This program was written to solve the Bronson Exercises 13.2 (P. 738) Exercise 5. This code requires a single structure data type. This structure must interactively accept the chart's data in an array of 5 structures. After data entry, the program needs to create a report listing each of the car's numbers and its MPG. The fleet average MPG should also be calculated at the end.
***********************************************************************/

//note//
  //general format taken from program 13.13 in the Bronson text. Includes global decleration of the struct

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUMCARS = 5;  // maximum number of cars

//part a (single struct has been declared which is suitable for the chart in the problem statement)

struct CarRec           // this is a global declaration
{  
  int carNo;
  double milesDriven;
  double gallonsUsed;
};

int main()
{
  //prompt user input for data in the struct

  cout << "Please prepare to enter car fleet data. \nRequired information includes car number, miles driven, and gallons of gas used." << endl;

  //turn single struct into an array of structs to hold all 5 data types

  


  return 0;
}