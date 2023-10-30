#include <iostream>
using namespace std;
typedef int hour;
int main() {
  hour h;
  cout << "what's the time? ";
  cin >> h;
  if (h >= 9 && h <= 18) {
    cout << "work hour";
  } else if (h < 9 || h > 18 && h < 23) {
    cout << "leisure";
  } else {
    cout << "invalid time";
  }
  return 0;
}
