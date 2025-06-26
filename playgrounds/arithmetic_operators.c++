#include <iostream>
using namespace std;
int main(){
    int transferee;
    int students = 20;

    cout << "Number of transferee: " << endl;
    cin >> transferee;


    students = students + transferee;

    cout << "students: " << students << endl;
    return 0;
}