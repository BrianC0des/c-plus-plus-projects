#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    string text;

    cout << "Enter a number: ";
    cin >> num; // User: 42<ENTER>
                // Buffer after: \n

    cin.ignore(); // Removes the \n

    cout << "Enter text: ";
    getline(cin, text); // Now works correctly

    cout << "Number: " << num << endl;
    cout << "Text: " << text << endl;

    return 0;
}