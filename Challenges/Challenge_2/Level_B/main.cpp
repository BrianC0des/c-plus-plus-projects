#include <iostream>
using namespace std;

int main() {
    int num, largest;

    cout << "Enter a number (0 to stop): ";
    cin >> num;

    largest = num;
    while(num != 0){
        if(num > largest && num != 0){
            largest = num;
        }

        cout << "Enter a number (0 to stop): ";
        cin >> num;
    }
    cout << "Largest number: " << largest <<endl;

    return 0;
}