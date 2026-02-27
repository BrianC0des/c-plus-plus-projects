
/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: YYYY-MM-DD
 */


#include <iostream>
#include <pthread.h>
#include <vector>
using namespace std;



int isCat(string str){
  bool cat = true;
  if(str == "cat") return cat;
  return false;
}

int isDog(string str){ 
  bool dog = true;
  if(str == "dog") return dog;
  return false;
}


int main() { 
    char choice;
  do {
      int n;
      cout << "Enter n: ";
      cin >> n;
      int catFound = 0;
      vector<string> pets(n);
      for(int i = 0; i < n; i++){
        cout << "Enter cat or dog: ";
        cin >> pets[i];
       }
      
       for(int i = 0; i < n; i++){
         if (isDog(pets[i])) {
             if (i > 0 && isCat(pets[i-1])) {
                 catFound++;
             }
             if (i < n-1 && isCat(pets[i+1])) {
                 catFound++;
             }
         }

        }
     cout << catFound; 
      



               
        cout << "\nRetry? [y/n]: ";
        cin >> choice;
        cin.ignore();
    } while(tolower(choice) == 'y');
    return 0;
}

