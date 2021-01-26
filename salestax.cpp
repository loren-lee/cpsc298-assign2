/** @author Loren Lee
* Student ID: 2348052
* lorlee@chapman.edu
* CPSC298-01
* Assignment 2: Loops, Arrays & Functions, Problem 3
*/
#include <iostream>

using namespace std;

/** Adds tax to the cost
* @param taxRate float representing the sales tax as a percent
* @param cost float representing the cost of an item before tax
* @return totalCost float representing the cost including sales tax
*/
float addTax(float taxRate, float cost){
  float totalCost = 0;
  totalCost = cost * (1 + (taxRate / 100));
  return totalCost;
}

int main(int argc, char** argv){
  float taxRate;
  float cost;


  cout << "Tax rate (%):" << endl;
  cin >> taxRate;
  cout << "Cost before tax ($):" << endl;
  cin >> cost;
  cout << "Total cost with tax: $" << addTax(taxRate, cost) << endl;

  return 0;
}
