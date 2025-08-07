// Demonstrates a block of code

#include <iostream>
using namespace std;

int main() {
  double result, number, divisor;

  cout << "Enter value: ";
  cin >> number;  
  
  cout << "Enter divisor: ";
  cin >> divisor;

  // the target of this fi is a block
  if (divisor != 0) {
    cout << "divisor does not equal zero so division is OK\n";
    result = number / divisor;
    cout << number << " / " << divisor << " is " << result;
  }

  return 0;
}