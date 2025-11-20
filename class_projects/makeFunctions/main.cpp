#include <iostream>
using namespace std;




int main(){
    string word;
    char vowels[5] = {'a','e','i','o','u'};
    
    int len, numVowels = 0;
    
    
    
    cout << "Enter a word: ";
    getline(cin, word);

    len = word.size();

    for(int i = 0; i <= len; i++){
        for(int j = 0; j < 5; j++)
            if(word[i] == vowels[j]) numVowels++;
    }

    cout << numVowels<<endl;



    





    return 0;
}