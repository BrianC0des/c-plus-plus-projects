#include <iostream>
using namespace std;

void add(double x , double y);
void subtract(double x , double y);
void multiply(double x , double y);
void divide(double x , double y);


int main() {
    double x, y;
    int operation;

    cout << "Enter first number: " << endl;
    cin >> x;

    cout << "Enter second number: " << endl;
    cin >> y;

    cout << " 1 - [+] \n 2 - [-] \n 3 - [*] \n 4 - [/] \n Enter the operation:" << endl;
    cin >> operation;


    switch (operation){
        case 1:
        add(x , y);
        break;
        case 2:
        subtract(x , y);
        break;
        case 3:
        multiply(x , y);
        break;
        case 4:
        divide(x , y);
        break;
        default:
        cout << "Invalid Operation" << endl;

    }

return 0;

}

void add( double x, double y){
    cout << "Result: " << x + y << endl;

}

void subtract( double x, double y){
    cout << "Result: " << x - y << endl;

}

void multiply( double x, double y){
    cout << "Result: " << x * y << endl;

}

void divide( double x, double y){
    cout << "Result: " << x / y << endl;

}