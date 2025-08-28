#include <iostream>
using namespace std;

long long fibonacci(long long n)
{
    if (n <= 1)
        return n;
    long long a = 0, b = 1, c;
    for (long long i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    long long n, j;
    cout << "Enter N: ";
    cin >> n;
    cout << "Enter number of iteration: ";
    cin >> j;

    for (long long i = 0; i <= j; i++)
    {
        long long x = fibonacci(n);
        cout << "F(" << n << ") = " << x << endl;
        n++;
    }

    while (true)
    {
        string choice;
        cout << "Do you want to restart? [Yes/No]: ";
        cin >> choice;

        if (choice == "Yes" || choice == "yes" || choice == "y")
        {
            cout << "Enter N: ";
            cin >> n;
            cout << "Enter number of iteration: ";
            cin >> j;

            for (long long i = 0; i <= j; i++)
            {
                long long x = fibonacci(n);
                cout << "F(" << n << ") = " << x << endl;
                n++;
            }
        }

        else
        {
            cout << "Program Ended" << endl;
            break;
        }
    }
}