#include <iostream>
#include <iomanip>
using namespace std;

double golden_iterate(double x)
{
    return 1.0 + 1.0 / x;
}

int main()
{
    double x = 1;
    cout << fixed << setprecision(8);

    cout << "Iteration 0: " << x << endl;
    
    for (int i = 1; i <= 9; ++i)
    {
        x = golden_iterate(x);
        cout << "Iteration " << i << ": " << x << endl;
    }

    return 0;
}
