/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: 2026-01-28
 */

bool isEven(int n){
  if (n % 2 == 0) {
    return true;
  }
  else {
    return false;
  }
}






#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter Number: ";
  cin >> num;
  
  if(isEven(num)){
    cout << "Number "<< num << " is an Even number";
  }
  else{
    cout << "Number "<< num << " is an Odd number";
  }


    return 0;
}


