#include <iostream>
using namespace std;

int main() {
    int num;
    string food;
    int i;

    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Enter your favorite food: ";
    cin >> food;

    while(i < num){
        cout << "I like "<< food;
    }


    
    
    
    return 0;
}