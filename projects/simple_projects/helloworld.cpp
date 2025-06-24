#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    if (num > 12)
    {
        cout << "The number is greater than 12 " << endl;
    }
    else if (num == 12)
    {
        cout << "The number is equal to 12" << endl;
    }

    else if (num == 22)
    {
        cout << "The number is 22" << endl;
    }

    else
    {
        cout << "The number is greater than 12" << endl;
    }

    return 0;
}