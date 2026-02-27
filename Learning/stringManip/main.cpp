/*
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: 2026-02-03
 */

#include <iostream>
#include <vector>
using namespace std;




bool isGreaterThanFive(string n){
    if(n.size() > 5){
      return true;
    }
  return false;
}

 


int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cin.ignore();
    vector<string> names(n);
    
    for(int i = 0; i < n; i++){
      cout << "Enter name: ";
      cin>>names[i];
      
    }
    
    for(int i = 0; i < n; i++)
        if (isGreaterThanFive(names[i]) {
          cout << "Letters in name "<<name[i]<<" is greater than five";
        }
  

    }

    return 0;
}
 

