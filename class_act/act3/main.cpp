/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: YYYY-MM-DD
 */


#include <iostream>
#include <vector>
using namespace std;

int main() {
    char choice;
  do {
      int n;
      cout << "Enter n: ";
      cin >> n;
      
      vector<string> str(n);
      for(int i = 0; i < n; i++){
        cout << "Enter word: ";
        cin >> str[i];
      }
      
      auto longest = str[0];
      for(int i = 0; i < str.size(); i++){
      if(str[i].size() > longest.size()){
          longest = str[i];
        }
      }
    

         cout<<"Longest word is: "<<longest;
      
        cout << "\nRetry? [y/n]: ";
        cin >> choice;
        cin.ignore();
    } while(tolower(choice) == 'y');
    return 0;
}

