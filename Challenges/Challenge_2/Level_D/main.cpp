#include <iostream>
using namespace std;

int main() {
    double temp;

    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if (temp < 0){
        cout << "Solid";
    }
    
    else if (temp >= 0 && temp <= 99){
        cout << "Liquid";
    }
    
    else{
        cout << "Gas";
    }
    
    return 0;
}