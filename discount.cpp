#include <iostream>
using namespace std;
int main() {
  float amt, disamt;
  cout << "enter the amount " << endl;
  cin >> amt;
  if (amt >= 5000) {
    disamt = amt * (80 / 100.0);
    cout << disamt;
  } else if (amt >= 2000 && amt <= 5000) {

    disamt = amt * (90 / 100.0);
    cout << disamt;
  } else if (amt < 2000) {
    disamt = amt * (95 / 100.0);
    cout << disamt;
  }
  return 0;
}
