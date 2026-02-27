/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: 2026-01-22
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string name;

  cout << "Enter your name: ";
  getline(cin, name);

  int pos = name.find(' ');
  
  name.erase(remove(name.begin(), name.end(), 'a'), name.end());
  
  int c = 0;
  cout << name;
  if(name.find(' ')){
    c++;
  }
  cout << c;


    return 0;
}


