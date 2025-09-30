#include <iostream>
using namespace std;



int main(){
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    
    do{
        cout << "Enter again positive number: ";
        cin >> num;




    }while(num <= 0);
    cout << "You entered a valid number: "<< num <<endl;



    return 0;

}