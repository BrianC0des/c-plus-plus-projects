
#include <iostream>
using namespace std;

// Manogura, Jay Jasper N. BSCS-1B

int main()
{
    int length, perimeter, width, area, base, height;
    char Answer;

    while (Answer != 'y')
    {
        cout << "A} COMPUTE PERIMETER OF RECTANGLE\nB} COMPUTE AREA OF RECTANGLE\nC} COMPUTE AREA OF TRIANGLE\nD} EXIT" << endl;
        cout << "Choose an option: " << endl;
        cin >> Answer;

        if (Answer == 'A' || Answer == 'a')
        {
            cout << "Enter the length of the rectangle: " << endl;
            cin >> length;
            cout << "Enter the width of the rectangle: " << endl;
            cin >> width;
            perimeter = 2 * (length + width);
            cout << "The perimeter of the rectangle is " << perimeter << endl;
        }
        else if (Answer == 'B' || Answer == 'b')
        {
            cout << "Enter the length of the rectangle: " << endl;
            cin >> length;
            cout << "Enter the width of the rectangle: " << endl;
            cin >> width;
            area = length * width;
            cout << "The area of the rectangle is " << area << endl;
        }
        else if (Answer == 'C' || Answer == 'c')
        {
            cout << "Enter the base of the triangle: " << endl;
            cin >> base;
            cout << "Enter the height of the triangle: " << endl;
            cin >> height;
            area = 0.5 * base * height;
            cout << "The area of the triangle is " << area << endl;
        }
        else if (Answer == 'D' || Answer == 'd')
        {
            cout << "Exit the program" << endl;
            break;
        }
        else
        {
            cout << "Invalid, Can you please try again" << endl;
        }
    }
}