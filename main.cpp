#include <iostream>
using namespace std;
int main() {
  float a, b, c;
  cout << "base of the triangle: ";
  cin >> a;
  cout << "height of the triangle ";
  cin >> b;
  c = (a * b) / 2;
  cout << "area of the right angled triangle is " << c;
  return 0;
}
