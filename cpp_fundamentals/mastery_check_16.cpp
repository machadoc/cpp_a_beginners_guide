#include <iostream>
using namespace std;

int main() {
  double one, two, three, four, five;
  double average;

  cout << "Enter five values: \n";
  cin >> one >> two >> three >> four >> five;
  average = (abs(one) + abs(two) + abs(three) + abs(four) + abs(five)) / 5;
  cout << "The average of the absolute values is: " << average << "\n";
  return 0;
}