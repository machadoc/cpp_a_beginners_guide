#include <iostream>
using namespace std;

int main() {
  double jovian_year;

  cout << "Enter the number of Jovian years: ";
  cin >> jovian_year;

  double earth_year = jovian_year / 12;
  cout << "Equivalent Earth years: " << earth_year << endl;

  return 0;
}