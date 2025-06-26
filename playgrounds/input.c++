#include <iostream>
using namespace std;

int main()
{

    string name;
    int age;

    
    cout << "How old are you?" << "\n";
    cin >> age;
    
    cout << "What is your name?" << "\n";
    getline(cin >> ws, name);

    
    cout << "You are " << name << endl;
    cout << "You are " << age << " years old!" << endl;




    return 0;
}