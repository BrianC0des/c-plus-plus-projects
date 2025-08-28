#include <iostream>
using namespace std;

int main(){

    double num1, num2, sum, diff, product, quotient;
   

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    cout << "The difference of " << num1 << " and " << num2 << " is " << diff << endl;
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
    cout << "The quotient " << num1 << " and " << num2 << " is " << quotient << endl;




    return 0;
}