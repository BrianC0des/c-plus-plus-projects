#include <iostream>
using namespace std;


//BRYAN P. SAAVEDRA
//BSCS 1B


int main(){

    char choice;
    
    do{
       int rows;
        cout << "Enter the number of rows: ";
        cin >> rows;

        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
            for(int k = 0; k <= 2*(rows-i); k++){
                cout << " ";
            }
            
            for(int m = 1; m <= i; m++){
                cout << "*";
            }
            cout <<endl;
        }
        

        
        
        cout << "Try another? (Y/N): ";
        cin >> choice;

    }while(choice == 'y' || choice == 'Y');








    return 0;
}
