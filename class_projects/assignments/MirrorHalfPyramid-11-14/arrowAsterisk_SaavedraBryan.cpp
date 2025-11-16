#include <iostream>
using namespace std;



//BRYAN P. SAAVEDRA
//BSCS 1B


int main() {
    int rows;
    char ch;

    do {
        cout << "Enter number of rows: ";
        cin >> rows;
        cout << endl;

        int cols = rows * 2 - 1; 

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j <= i; j++){
                cout << " ";
            }
            for (int j = 0; j < cols; j++){
                cout << "*"; 
            }
            cout << endl;
        }

       
        for (int i = rows - 1; i >= 0; i--) {
            for (int j = 0; j <= i; j++){
                cout << " ";
            }
            for (int j = 0; j < cols; j++){
                cout << "*";
            }
            cout << endl;
        }

        cout << "Try another? (Y/N): ";
        cin >> ch;
        cout << endl;

    } while (ch == 'Y' || ch == 'y');

    return 0;
}
