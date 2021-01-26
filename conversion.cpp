/** @author Loren Lee
* Student ID: 2348052
* lorlee@chapman.edu
* CPSC298-01
* Assignment 2: Loops, Arrays & Functions, Problem 4
*/
#include <iostream>

/* This program reads in a length in feet and inches and outputs the equivalent
length in meters and centimeters.*/

using namespace std;
/** A double representing the length in feet*/
double numFeet;
/** A double representing the length in inches*/
double numInches;
/** A double representing the length in meters*/
double numMeters;
/** A double representing the length in centimeters*/
double numCm;
/** A double representing the total length in inches*/
double totalInches;
/** A double representing the total length in centimeters*/
double totalCm;

/** Prompts the user to enter the length in feet and inches*/
void userinput(){
  cout << "Enter feet: " << endl;
  cin >> numFeet;
  cout << "Enter inches: " << endl;
  cin >> numInches;
}

/** Calculates the length in feet to inches*/
void calculateTotalInches(){
  totalInches = (numFeet * 12) + numInches;
}

/** Calculates the length in inches to centimeters*/
void calculateTotalCm(){
  totalCm = totalInches * 2.54;
}

/** Calculates the length in meters and centimeters*/
void calculateMetersAndCm(){
  calculateTotalInches();
  calculateTotalCm();
  while(totalCm >= 100){
    numMeters += 1;
    totalCm -= 100;
  }
  numCm = totalCm;
}

/** Outputs the length in meters and centimeters*/
void output(){
  cout << numMeters << " meters, " << numCm << " centimeters" << endl;
}

int main(int argc, char** argv){
  string input = "";
  while (input != "exit"){
    userinput();
    calculateMetersAndCm();
    output();
    cout << "Enter \"exit\" to end the program" << endl;
    cin >> input;
  }

  return 0;
}
