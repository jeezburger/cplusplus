#include <cmath> //include this for pow() function
#include <iostream>
using namespace std;
int main() {
  float r, x1, y1, x2, y2;
  cout << "enter the 4 coordinates ";
  cin >> x1 >> y1 >> x2 >> y2;
  r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  cout << "the distance between the two points is " << r;
  return 0;
}
