#include <iostream>
using namespace std;


double calc_average(double num1, double num2, double num3, double num4, double num5, int no_of_inputs);



int main(){
    double num1, num2, num3, num4, num5;
    int num_of_inputs;
    string choice;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter fourth  number: ";
    cin >> num4;
    cout << "Enter fifth number: ";
    cin >> num5;
    cout << "Enter the no. of inputs: ";
    cin >> num_of_inputs;
    cout << "Result: " <<calc_average(num1,num2,num3,num4,num5,num_of_inputs) << endl;
    while(true){


        cout << "Do you want to continue? [yes/no] : ";
        cin >> choice;

        if(choice == "yes"){
             
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Enter third number: ";
            cin >> num3;
            cout << "Enter fourth  number: ";
            cin >> num4;
            cout << "Enter fifth number: ";
            cin >> num5;
            cout << "Enter the no. of inputs: ";
            cin >> num_of_inputs;
            cout << calc_average(num1,num2,num3,num4,num5,num_of_inputs) << endl;
        }
        else{
            break;
        }



    }
    

    
    
    
    
    
}


double calc_average(double num1, double num2, double num3,double num4, double num5, int no_of_inputs){
    int sum = num1 + num2 + num3 + num4 + num5;
    return sum/no_of_inputs;
}





