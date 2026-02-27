/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: 2026-01-21
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


string reverseWord(string word){
  int len = word.length();
  string revWord;
  for(int i = len-1; i >= 0; i--){
    revWord.append(1, word[i]);
  }
  return revWord;

}


int main() {
  string input;
  cout << "Enter Word: ";
  cin >> input;

   
  
  string rev = reverseWord(input);

  string palindrome;

  if (rev == input) {
      palindrome = "palindrome";
  }
  else {
      palindrome = "not palindrome";
  }
    
  
cout << palindrome;

  return 0;
}
