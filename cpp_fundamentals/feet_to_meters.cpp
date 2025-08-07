/*  
  Project 1-1
  This program converts feet to meters.
*/
#include <iostream>
using namespace std;

int main() {
  double feet;    // variable to hold feet value
  double meters;  // variable to hold the conversion to meters

  cout << "Enter the length in feet: ";
  cin >> feet;  // read the number of feet

  meters = feet / 3.28;  // convert to meters
  cout << feet << " feet is " << meters << " meters.";

  return 0;
}