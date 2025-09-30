#include <iostream>
using namespace std;



int main(){
    int num, count = 10;
    cout << "Enter a number: ";
    cin >> num;


    for (int i = 0; i < count + 1; i++){
        int result = num * i;
        cout << num << " x " << i << " = " << result << endl;
    }


    return 0;
}