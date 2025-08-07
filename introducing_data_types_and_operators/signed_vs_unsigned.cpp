#include <iostream>
/*  this program shows the difference between
    signed and unsigned intigers*/

using namespace std;

int main() {
  short int i;
  short unsigned int j; 

  i = 60000;
  j = i;
  cout << i << " " << j;

  return 0;
}