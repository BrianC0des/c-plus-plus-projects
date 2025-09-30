#include <iostream>
using namespace std;

int main()
{
    int perimeter, lenght, width, area, base, height;
    char answer;
    while (answer != 'D' || answer == 'd')
    {
        cout << '\n';
        cout << "\t\tMenu" << endl;
        cout << "A} COMPUTE PERIMETER OF RECTANGLE \nB} COMPUTE AREA OF RECTANGLE \nC} COMPUTE AREA OF TRIANGLE \nD} EXIT" << endl;
        cout << "Enter option: ";
        cin >> answer;

        if (answer == 'A' || answer == 'a')
        {
            cout << "Computing for Perimeter of Rectangle" << endl;
            cout << "Enter Lenght: ";
            cin >> lenght;
            cout << "Enter Width: ";
            cin >> width;
            perimeter = 2 * (lenght + width);
            cout << "The Perimeter of a rectangle is: " << perimeter << endl;
        }
        else if (answer == 'B' || answer == 'b')
        {
            cout << "Computing for Area of Rectangle" << endl;
            cout << "Enter Lenght: ";
            cin >> lenght;
            cout << "Enter Width: ";
            cin >> width;
            area = lenght * width;
            cout << "The Area of a rectangle is: " << area << endl;
        }
        else if (answer == 'C' || answer == 'c')
        {
            cout << "Computing for Area of Triangle" << endl;
            cout << "Enter Base: ";
            cin >> base;
            cout << "Enter Height: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "The Area of a triangle is: " << area << endl;
        }
        else if (answer == 'D' || answer == 'd')
        {
            break;
        }
        else
        {
            cout << "Invalid Input!" << endl;
        }
    }

    cout << "Program Ended!";
}