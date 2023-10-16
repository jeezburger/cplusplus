#include <iostream>
using namespace std;
enum day {
  mon,
  tue,
  wed,
  thu,
  fri
}; // day is userdefined and mon tue... hold values from 0 to 6
// if you want mond to start from 1just type mon=1
int main() {
  day d;
  d = tue;
  cout << d;
}
