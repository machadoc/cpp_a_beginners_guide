/*
  Use the Pythagorean theorem to find
  the length of the hypotenus given
  the length of the two opposing sides.
*/

#include <cmath>  // for sqrt function
#include <iostream>
using namespace std;

int main() {
  double x, y, z;

  x = 5.0;
  y = 4.0;

  z = sqrt(x * x + y * y);  // calculate hypotenuse
  cout << "hypotenuse is: " << z;

  return 0;
}