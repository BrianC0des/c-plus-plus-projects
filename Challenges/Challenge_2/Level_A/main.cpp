#include <iostream>
using namespace std;

int main() {
    string word;

    do{
        cout << "Enter a word: ";
        cin >> word;
        cout <<"The lenght of the word: "<< word << " is " << word.size() <<endl;


    }while(word != "exit");


    
    
    return 0;
}