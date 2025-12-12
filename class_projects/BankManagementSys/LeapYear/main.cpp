#include <iostream>
using namespace std;

int main() {
  int year;
  char ans;
  do {
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0 || year % 4 == 0) && year != 100 == 0) {
      cout << "It is a Leap year!";
    } else {
      cout << "It is not a Leap year!";
    }
    cout << "\nDo you want to continue [y/n]: ";
    cin >> ans;

  } while (ans == 'y' || ans == 'Y');
  cout << "Program Ended!";
}
