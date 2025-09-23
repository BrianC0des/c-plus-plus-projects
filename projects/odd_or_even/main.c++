#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is even" << endl;
    }
    else
    {
        cout << num << " is odd" << endl;
    }
    char choice;
    while (true)
    {
        cout << "Do you want to enter another number: ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter a number: ";
            cin >> num;
            if (num % 2 == 0)
            {
                cout << num <<" is even " << endl;
            }
            else
            {
                cout << num <<" is odd " << endl;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}