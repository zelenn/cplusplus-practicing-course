#include <iostream>
using namespace std;

//simple pow function emplementation
int power(int x, unsigned p) { return p > 0 ? x * power(x, --p) : 1; }

int main() {
  int number = 0;
  int pow = 0;

  cout << "hello!! type number and pow in: ";

  cin >> number >> pow;

  cout << "the result is: " << power(number, pow);
}