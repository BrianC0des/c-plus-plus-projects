/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: 2026-02-03
 */

#include <iostream>
#include <vector>
using namespace std;


void ifthan(int x, int y){
  if(x < y){
    cout << x << " < " << y;
  }
  else if(x > y){
    cout << x << " > " << y;
  }

}



int main() {
  
  char choice;
  do{
    int n;
    cout << "Enter n;";
    cin >> n;
    vector<int> numbers(n);
    
    for(int i = 0; i < n; i++){
      cout << "Enter Number: ";
      cin >> numbers[i];
    }





  }while(tolower(choice) == 'y');





    return 0;
}


