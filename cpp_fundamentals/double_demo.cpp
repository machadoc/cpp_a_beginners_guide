/*
    This program illustrates the differences
    between int and double
*/

#include <iostream>
using namespace std;

int main() {
  int ivar;     // declares integer variable
  double dvar;  // declares floating-point variable

  ivar = 100;    // assigns 100 to ivar
  dvar = 100.0;  // assigns 100.0 to dvar

  cout << "original ivar: " << ivar << "\n";
  cout << "original dvar: " << dvar << "\n";

  cout << "\n";  // print a blank line

  // now divide both variables by 3
  ivar = ivar / 3;
  dvar = dvar / 3.0;

  cout << "ivar after division: " << ivar << "\n";
  cout << "dvar after division: " << dvar << "\n";

  return 0;
}