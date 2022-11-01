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

struct CarRec           // this is a global declaration
{  
  int carNo;
  int milesDriven;
  int gallonsUsed;
};