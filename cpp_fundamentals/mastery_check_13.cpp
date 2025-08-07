// matery check 13

#include <iostream>
using namespace std;

int main() {
  for (double earth_poound = 1; earth_poound <= 100; earth_poound++) {
    double moon_weight = earth_poound * 0.17;
    cout << "Earth weight: " << earth_poound << " pounds, "
         << "Moon weight: " << moon_weight << " pounds" << "\n";

    if (static_cast<int>(earth_poound) % 25 == 0) {
      cout << "\n";
    }
  }
  return 0;
}