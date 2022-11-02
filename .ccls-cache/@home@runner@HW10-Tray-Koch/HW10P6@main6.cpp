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

//prototype functions 
void PrintStruct(CarRec CarFleet[], const int NUMCARS);



int main()
{
  //prompt user input for data in the struct

  cout << "Please prepare to enter car fleet data for 5 vehicles. \nRequired information includes car number, miles driven, and gallons of gas used." << endl;

  //turn single struct into an array of structs to hold all 5 data types
  CarRec CarFleet[NUMCARS]; //array of structs initalized

  //for loop to fill array of structs 
  for (int i = 0; i < NUMCARS; i++)
  {
    cout << "Please enter the car number: ";
    cin >> CarFleet[i].carNo;
    cout << "Please enter the miles driven: ";
    cin >> CarFleet[i].milesDriven;
    cout << "Please enter the gallons of gas used: ";
    cin >> CarFleet[i].gallonsUsed;
  }

  //display table of results back to user
  PrintStruct(CarFleet, NUMCARS);

  


  return 0;
}

//user defined functions

//this function is used to print the struct
void PrintStruct(CarRec CarFleet[], const int NUMCARS)
{
  cout << "\nYou have entered the following information..." << endl;
  cout << "Car Number     Miles Driven     Gallons Used" << endl;

  //for loop to print out array of structs
  for(int i = 0; i < NUMCARS; i++)
  {
    cout << endl << setw(6) << CarFleet[i].carNo << setw(16) << CarFleet[i].milesDriven << setw(16) << CarFleet[i].gallonsUsed << endl;
  }
  
  return;
}