#include <iostream>
using namespace std;

int main() {
 
    string fruits[4] = {"Banana", "Apple", "Strawberry", "Blueberry"};
    int len = sizeof(fruits)/sizeof(fruits[0]);
    for(int i = 0; i < len; i++ ){
        cout << i << " = " << fruits[i]<<"\n";


    }
    for(string fruit: fruits){
        cout << fruit <<"\n";
    }
 
 
    return 0;
}