// program that finds all the prime numbers between 1 and 100.

#include <iostream>
using namespace std;

int main() {
  int num, i;
  bool isPrime;

  cout << "Prime numbers between 1 and 100 are: \n";

  for (num = 2; num <= 100; num++) {
    isPrime = true;  // assume num is prime

    // check if num is divisible by any number from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
      if (num % i == 0) {
        isPrime = false;  // num is not prime
        break;
      }
    }

    if (isPrime) {
      cout << num << " ";
    }
  }

  cout << "\n\a";
  return 0;
}