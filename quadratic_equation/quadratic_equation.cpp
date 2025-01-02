#include <cmath>
#include <iostream>

using namespace std;

int main() {
  cout << "please enter a, b, c coeffisients: ";
  int a, b, c;
  cin >> a >> b >> c;

  double D = b * b - 4 * a * c;

  if (a == 0) {
    if (b == 0) {
      cout << (c == 0 ? "Infinite solutions" : "No solutions") << endl;
    } else {
      double root = -static_cast<double>(c) / b;
      cout << root << endl;
    }
    return 0;
  }

  if (D > 0) {
    double sqrtD = sqrt(D);
    double root1 = (-b + sqrtD) / (2 * a);
    double root2 = (-b - sqrtD) / (2 * a);
    cout << root1 << " " << root2 << endl;
  } else if (D == 0) {
    double root = -b / (2.0 * a);
    cout << root << " " << root << endl;
  } else {
    cout << "No real roots" << endl;
  }

  return 0;
}