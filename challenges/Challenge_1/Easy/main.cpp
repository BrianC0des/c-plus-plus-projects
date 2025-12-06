#include <iostream>
using namespace std;

int main() {
    int num;
    int nums[9] = {1,2,3,4,5,6,7,8,9};
    cout << "Enter a number: "<<endl;
    cin >> num;

    if(num != nums[9]){
        cout <<"Invalid Input";
    }
    else if (num == 0){
        cout <<"ZERO";
    }

    else if (num < 0){
        cout <<"Negative";
    }

    else if (num > 0){
        cout << "Postive";
    }





    return 0;
}