/*
  Project 2-3
  comput ethe regular payments for a loan
*/

#include <iostream>
#include <cmath>

using namespace std;
int main() {
  double principal;           // original principal
  double interest_rate;       // interest rate, such as 0.075
  double pay_per_year;        // number of payments per year
  double number_of_years;     // number of years
  double payment;             // the regular payment
  double number, denoninator; // temporary work variables
  double b, e;                // base and exponent for call to pow()

  cout << "Enter the principal: ";
  cin >> principal;

  cout << "Enter the interest rate: ";
  cin >> interest_rate;

  cout << "Enter the number of payments per year: ";
  cin >> pay_per_year;

  cout <<  "Enter the number of years: ";
  cin >> number_of_years;

  number = interest_rate * principal / pay_per_year;

  e = -(pay_per_year * number_of_years);
  b = (interest_rate / pay_per_year) + 1;

  denoninator = 1 - pow(b, e);

  payment = number / denoninator;

  cout << "Your payment is: " << payment << "\n";

  cout << "Total amount of interest is: " << payment * pay_per_year * number_of_years << "\n";

  return 0;
}