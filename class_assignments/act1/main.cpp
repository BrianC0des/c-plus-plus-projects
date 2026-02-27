/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: YYYY-MM-DD
 */
#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
          
          string word;
          cout << "Enter a String: ";
          cin >> word;
          int len = word.size();
                           
         bool first = true;
         for (int i = 0; i < len; i++) {
              for (int j = 1; j <= len - i; j++) {
                    if (j > 0) {
                         if(!first) cout << " , ";
                         cout << word.substr(i, j);
                         first = false;
                    }  
               }
          }
        cout << "\nRetry? [y/n]: ";
        cin >> choice;
        cin.ignore();
    } while(tolower(choice) == 'y');
    return 0;
}

