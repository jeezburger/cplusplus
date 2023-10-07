#include <iostream>
using namespace std;
int main() {
  int n, sum; // sum of n terms
  cout << "enter number of terms: ";
  cin >> n;
  sum = n * (n + 1) / 2;
  cout << sum;
}
