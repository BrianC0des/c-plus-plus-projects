#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "What is your age? : ";
    cin >> age;

    if (age <= 17)
    {
        cout << "You can't drink alcohol";
    }
    
    else if (age >= 18 && age <= 50)
    {
        cout << "You can drink alcohol" << endl;
    }

    else
    {
        cout << "You are too old for that" << endl;
    } 
    return 0;
}