#include <iostream>
using namespace std;

int main() {
    int num;
    int count = 1;
    
    cout << "Enter a number: ";
    cin >> num;

    while(count <= num){
        cout << "Step " << count <<endl;
        count++;
    }

    return 0;
}