#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;




double cf_calc(double mass, double velocity, double radius);


int main(){
    double mass, velocity, radius;

    cout << "Enter mass (kg): ";
    cin >> mass;
    cout << "Enter velocity (m/s): ";
    cin >> velocity;
    cout << "Enter radius (m): ";
    cin >> radius;

    double CF = cf_calc(mass, velocity, radius);
    cout << "Centrifugal Force = "<<CF<<" N" <<endl;
    return 0;
}


double cf_calc(double mass, double velocity, double radius ){
    cout << fixed << setprecision(2);
    return (mass * pow(velocity, 2) / radius);
}