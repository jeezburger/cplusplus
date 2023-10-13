#include <iostream>
using namespace std;
int main() {
  int a, d, b = 2, c = 3;
  a = ++b * c; // pre increment (first increase b and then return value)
  // a = b++ * c; (return the value of b as it is and multiply)

  d = --b * c; // pre decrement (first decrease b (from 3 to 2 here because it
               // has already been increased to 3 in the previous line) and then
               // multiply by c)
  cout << d;
  cout << "\n";
  cout << a;
  return 0;
}
