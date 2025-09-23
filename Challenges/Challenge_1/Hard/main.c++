#include <iostream>
using namespace std;




int multiply(){
    int num;
    int count = 1;
    cout << "Enter a number: ";
    cin >> num;
    while(count <= 10){
    cout << num << " x " << count << " = " << num*count <<endl;
    count++;
    }

    return 1;
}



int main() {
    string choice;
    multiply();
    while(true){
        cout << "Do you want to enter again: ";
        cin >> choice;
        if(choice == "yes" || choice == "Yes"){
            multiply();
            
        }
        else
        {
            cout << "Program Ended!";
            break;
        }

    }

    return 0;
}
