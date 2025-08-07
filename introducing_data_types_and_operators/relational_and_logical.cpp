// demonstrate the relational and logical operators

#include <iostream>
using namespace std;

int main() {
  int i, j;
  bool b1, b2;
  i = 10;
  j = 11;
  if (i < j) cout << "i is less than j\n";
  if (i <= j) cout << "i is less than or equal to j\n";
  if (i != j) cout << "i is not equal to j\n";
  if (i == j) cout << "this won't excecute\n";
  if (i > j) cout << "this won't excecute\n";
  if (i >= j) cout << "this won't excecute\n";

  b1 = true;
  b2 = false;
  if (b1 && b2) cout << "this won't execute\n";
  if (!(b1 && b2)) cout << "b1 and b2 are not both true\n";
  if (b1 || b2) cout << "b1 is true or b2 is true\n";

  return 0;
}