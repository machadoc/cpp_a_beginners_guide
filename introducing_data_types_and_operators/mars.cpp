/*
  Project 2-1
  Talking to Mars
*/

#include <iostream>
using namespace std;

int main() {
  double distance, lightspeed, delay, delay_in_min;

  distance = 34000000; // 34,000,000 miles
  lightspeed = 186000; // 186,000 miles per second

  delay = distance / lightspeed;

  cout << "Time delay when talking to Mars : " << delay << " seconds.\n";

  delay_in_min = delay / 60;

  cout << "This is " << delay_in_min << " minutes.\n";

  return 0;
}