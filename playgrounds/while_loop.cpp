#include <iostream>
using namespace std;


int main(){

    /*
    string name;

    while (name.empty()){
        cout << "Enter Your Name: ";
        getline(cin, name);

    }

    cout << "Hello " << name;
    */
    /*
    int number;
    
    
    do{
        cout << "Enter positive number: ";
        cin >> number;
    }while (number < 0);
    
    cout << "The number is: "<< number << endl;
    */



    string name;


    do{
        cout << "Enter your name: ";
        getline(cin,name);

    }while (name.length() < 5);
    
    


    return 0;
}