/*
  Project 1-2
  This program displays a conversion of feet to meters
*/

#include <iostream>
using namespace std;

int main() {
  double feet, meters;
  int counter;
  
  counter = 0;

  for(feet =1; feet <= 100; feet += 1) {
    meters = feet / 3.28;
    cout << feet << " feet is " << meters << " meters\n";
    
    counter++;
    
    // Display a message every 10 conversions
    if (counter == 25) {
      cout << "\n"; // output a blank line
      counter = 0;  // reset the counter
    }
  }

  return 0;
}
