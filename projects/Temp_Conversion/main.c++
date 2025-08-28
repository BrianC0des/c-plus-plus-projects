#include <iostream>
using namespace std;





double celTofah(double temp);
double fahTocel(double temp);

int main (){

    double temp;
    char choice;
    cout << "**************************\n";
    cout << "1 - Celsius to Fahrenheit" << endl;
    cout << "2 - Fahrenheit to Celsius" << endl;
    cout << "**************************\n";
    cin >> choice;

    switch (choice)
    {
    case '1':
        cout << "Given in Celsius: ";
        cin >> temp;
        temp = celTofah(temp);
        cout << temp << " F" << endl;
        break;
        
        case '2':
        cout << "Given in Fahrenheit: ";
        cin >> temp;
        temp = fahTocel(temp);
        cout << temp << " C" << endl;
        break;
    
    default:
        cout << "Invalid Input";
        break;
    }

    return 0;
}

double celTofah(double temp){
    return (temp * 1.8) + 32;
}

double fahTocel(double temp){
    return (temp - 32) * 0.55;
}
