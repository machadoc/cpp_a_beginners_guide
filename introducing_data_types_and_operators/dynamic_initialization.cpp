// Demonstrate dynamic initialization

#include <iostream>
using namespace std;

int main() {
  double radius = 4.0, height = 5.0;

  // dynamic initialization of volume
  double volume = 3.14159 * radius * radius * height;

  cout << "Volume of the cylinder: " << volume;

  return 0;
}