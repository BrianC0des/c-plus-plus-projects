#include <iostream>
using namespace std;

int main()
{
    double temp;
    int num_of_temp;
    int count = 1;
    cout << "Enter no. of temperature? : ";
    cin >> num_of_temp;
    while (count <= num_of_temp)
    {
        cout << "Enter temperature # " << count << endl;
        cin >> temp;
        if (temp >= 40)
        {
            cout << "REMARKS: VERY HOT" << endl;
        }
        else if (temp >= 30)
        {
            cout << "REMARKS: HOT" << endl;
        }
        else
        {
            cout << "REMARKS: GOOD TEMPERATURE" << endl;
        }

        count++;
    }

    return 0;
}
