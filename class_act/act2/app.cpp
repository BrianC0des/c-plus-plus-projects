/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: 2026-02-03
 */


#include <iostream>
#include <cctype>
#include <vector>
using namespace std;








string ReverseWord(string word){
  
  string rev = "";
  
    
     for(int i = word.size() - 1; i >= 0; i--){
        rev+=tolower(word[i]);
    }
     
  return rev;
}


bool isPalindrome(string rev, string words){
    string word = "";
  
  for(int i = 0; i < words.size(); i++){
     word+=tolower(words[i]);

  }

  for(int i = 0; i < word.size(); i++){
    if(word[i] == '@'){
      word[i] = 'a';
    }
    else if(word[i] == '1'){
      word[i] = 'l';
    }
    else if(word[i] == '0'){
      word[i] = 'o';
    }
    else if(word[i] == '3'){
      word[i] = 'e';
    }
    else if(word[i] == '$'){
      word[i] = 's';
    }
  
  }
   for(int i = 0; i < rev.size(); i++){
    if(rev[i] == '@'){
      rev[i] = 'a';
    }
    else if(rev[i] == '1'){
      rev[i] = 'l';
    }
    else if(rev[i] == '0'){
      rev[i] = 'o';
    }
    else if(rev[i] == '3'){
      rev[i] = 'e';
    }
    else if(rev[i] == '$'){
      rev[i] = 's';
    }
  
  }

  
  if(rev == word){
        return true;
    }
  return false;
}


int main() {
  char choice;


do{
  int n;
  cout << "Enter n: ";
  cin >> n;
  vector<string> words(n);
  for(int i = 0; i < n; i++){
      cout << "Enter a word: ";
      cin >> words[i];
  }


  cout << "Palindromes: [ ";
  for(int i = 0; i < n; i++){
     if(isPalindrome(ReverseWord(words[i]), words[i])){  
        cout << words[i] <<" , ";
      }

    }
  cout << " ]";




  cout << "\nDo you want to repeat [y/n]: ";
  cin >> choice;
  cin.ignore();
}while(tolower(choice) == 'y');


    return 0;
}

