#include <iostream>
using namespace std;

int main() {
    string pass;
    
    cout << "Enter your password: ";
    cin >> pass;
    
    do{
        cout << "Password Incorrect: ";
        cin >> pass;
        

    }while(pass != "iamatomic123");
    cout << "Access Granted!" <<endl;
    return 0;
}