#include <iostream>
using namespace std;

int main()
{

    int rows;
    int columns;
    char symbols;

    cout << "How many rows?: ";
    cin >> rows;

    cout << "How many columns?: ";
    cin >> columns;

    cout << "Enter a symbol to use: ";
    cin >> symbols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << symbols;
        }

        cout << "\n";
    }

    return 0;
}