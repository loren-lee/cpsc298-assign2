/** @author Loren Lee
* Student ID: 2348052
* lorlee@chapman.edu
* CPSC298-01
* Assignment 2: Loops, Arrays & Functions, Problem 1
*/
#include <iostream>
#include <string>
#include <vector>

/* This program reads up to 10 integers into an array
and then prints the integers back to the screen*/

using namespace std;

int main(int argc, char** argv){
  /** An int array representing the integers*/
  int numberArray [10];

  /** Inputs the 10 integers into the array*/
  cout << "Enter 10 numbers" << endl;
  for (int i = 0; i< 10; ++i){
    cin >> numberArray[i];
  }

  /** Outputs the integers in the array*/
  cout << "Numbers in the array:" << endl;
  for (int i = 0; i< 10; ++i){
    cout << numberArray[i] << " ";
  }

  return 0;
}
