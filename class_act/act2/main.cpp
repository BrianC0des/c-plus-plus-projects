/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: 2026-02-03
 */


#include <iostream>
#include <cctype>
using namespace std;

int main() {
  char choice;

do{
  int countUpper = 0, countLower = 0, countDigit = 0, special = 0;
  string words;

  cout << "Enter Words: ";
  getline(cin, words);
  
  for(size_t i = 0; i < words.size(); i++){
    if(isupper(words[i])){
      countUpper++;
    }
    else if(islower(words[i])){
      countLower++;
    }
    else if(isdigit(words[i])){
      countDigit++;
    }
    else{
      special++;
    }
  }

  cout << "[ "<<countUpper<<", "<<countLower<<", "<<countDigit<<", "<<special<<" ]"<<endl;
  cout << "Do you want to repeat [y/n]: ";
  cin >> choice;
  cin.ignore();
}while(tolower(choice) == 'y');


    return 0;
}


