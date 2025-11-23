// BRYAN P. SAAVEDRA
// BSCS - 1B

#include <iostream>
using namespace std;

int main() {
  int x, y;
  char answer;

  while (answer != 'y' || answer != 'Y') {
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "\n";

    if (x == 0 && y == 0) {
      cout << "Point (" << x << ',' << y << ") is in the Origin" << endl;
    } else if (x > 0 && y > 0) {
      cout << "Point (" << x << ',' << y << ") is in the 1st Quadrant" << endl;
    } else if (x < 0 && y > 0) {
      cout << "Point (" << x << ',' << y << ") is in the 2nd Quadrant" << endl;
    } else if (x < 0 && y < 0) {
      cout << "Point (" << x << ',' << y << ") is in the 3rd Quadrant" << endl;
    } else if (x > 0 && y < 0) {
      cout << "Point (" << x << ',' << y << ") is in the 4th Qudrant" << endl;
    } else if (x == 0 && y >= 0 || y <= 0) {
      cout << "Point (" << x << ',' << y << ") is in the x axis" << endl;
    }

    else if (x >= 0 || x <= 0 || y == 0) {
      cout << "Point (" << x << ',' << y << ") is in the y axis" << endl;
    }

    else {
      cout << "Invalid Input";
    }
    cout << "\n";
    cout << "Do you want to enter again: [y/n]: ";
    cin >> answer;

    if (answer == 'n' || answer == 'N') {
      break;
    }
  }
  cout << "Program Ended";
}
