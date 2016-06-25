#include <iostream>
using namespace std;

// Defines the greatest common divisor of a and b
int gcd(int a, int b) {
  
  if (a == 0) return b;
  if (b == 0) return a;
  if (a == b) return a;
  if (a == 1 or b == 1) return 1;
  if (a % 2 == 0 and b % 2 == 0) return 2 * gcd(a/2, b/2);
  if (a % 2 == 0 and b % 2 == 1) return gcd(a/2, b);
  if (a % 2 == 1 and b % 2 == 0) return gcd(a, b/2);
  if (a % 2 == 1 and b % 2 == 1) {
    if (a > b) return gcd(b, (a-b)/2);
    else return gcd(a, (b-a)/2);
  }
}

int main (int argc, char** argv) {
  int a = 75, b = 225;
  cout << gcd(a, b) << endl;
  return 0;
}