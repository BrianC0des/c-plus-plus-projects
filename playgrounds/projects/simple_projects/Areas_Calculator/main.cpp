#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

const double pi = M_PI;

double areaofSquare(double side);
double areaofRect(double lenght, double width);
double areaofTri(double base, double height);
double areaofCirc(double radius);
double areaofParallelogram(double base, double height);
double areaofTrapezoid(double base1, double base2, double height);
double ellipse(double a, double b);




int main()
{
    double area, side, lenght, width, base, height, radius, base1 , base2, a, b;



    char choice;

    cout << "*********************************\n";
    cout << "1 - Square\n";
    cout << "2 - Rectangle\n";
    cout << "3 - Triangle\n";
    cout << "4 - Circle\n";
    cout << "5 - Parallelogram\n";
    cout << "6 - Trapezoid\n";
    cout << "7 - Ellipse\n";
    cout << "*********************************\n";
    cin >> choice;

    switch (choice){
        case '1':
            cout << "Side: ";
            cin >> side; 
            area = areaofSquare(side);
            cout << "Area of Square: "<< area << endl;
            break;
        
        case '2':
            cout << "Height: ";
            cin >> lenght; 
            cout << "Width: ";
            cin >> width;
            area = areaofRect(lenght, width);
            cout << "Area of Rectangle: "<< area << endl;
            break;
            
        case '3':
            cout << "Base: ";
            cin >> base; 
            cout << "Height: ";
            cin >> height;
            area = areaofTri(base, height);
            cout << "Area of Triangle: "<< area << endl;
            break;

        case '4':
            cout << "Radius: ";
            cin >> radius; 
            area = areaofCirc(radius);
            cout << "Area of Circle: " << area << endl;
            break;

        case '5':
            cout << "Base: ";
            cin >> base;
            cout << "Height: ";
            cin >> height; 
            area = areaofParallelogram(base, height);
            cout << "Area of Parallelogram: " << area << endl;
            break;

        case '6':
            cout << "Base 1: ";
            cin >> base1;
            cout << "Base 2: ";
            cin >> base2;
            cout << "Height: ";
            cin >> height;
            area = areaofTrapezoid(base1, base2, height);
            cout << "Area of Trapezoid: " << area << endl;
            break;

        case '7':
            cout << "A: ";
            cin >> a;
            cout << "B: ";
            cin >> b;
            area = ellipse(a, b);
            cout << "Ellipse: " << area << endl;
            break;

            
        default:
            cout << "Invalid Input!!";
            break;
    }



}




double areaofSquare(double side)
{
    
    return pow(side, 2);

}

double areaofRect(double lenght, double width)
{
   
    return lenght * width;

}


double areaofCirc(double radius)
{
    
    return pi * radius * radius;
    
}

double areaofTri(double base, double height)
{
    
    return 0.5 * base * height;

}
double areaofParallelogram(double base, double height)
{
    
    return base * height;

}
double areaofTrapezoid(double base1, double base2, double height)
{
    
    return 0.5 * (base1 + base2) * height;

}

double ellipse(double a, double b)
{
    return pi * a * b;
}
