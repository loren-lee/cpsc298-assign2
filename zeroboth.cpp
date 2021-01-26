/** @author Loren Lee
* Student ID: 2348052
* lorlee@chapman.edu
* CPSC298-01
* Assignment 2: Loops, Arrays & Functions, Problem 2
*/
#include <iostream>

using namespace std;
/** Sets two integer values to 0*/
void zeroBoth (int& x, int& y){
  x = 0;
  y = 0;
}

int main(int argc, char** argv){
  int x = 0;
  int y = 0;
  cout << "Enter a number:" << endl;
  cin >> x;
  cout << "Enter a number:" << endl;
  cin >> y;
  zeroBoth(x, y);
  cout << x << " " << y << endl;
  cout << "Both numbers are set to zero." << endl;
  return 0;
}
