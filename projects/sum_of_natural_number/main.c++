#include <iostream>
using namespace std;




int main(){

    int num;
    int count = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i < num + 1; i++){
        count = count + i;
    }
    cout << count <<endl;


    return 0;
}