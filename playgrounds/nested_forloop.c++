#include <iostream>
using namespace std;

int fibo(int n);

int main()
{
    int rows;
    int columns;
    char symbol;
    int n;

    cout << "How many rows?: ";
    cin >> rows;
        
    cout << "How many columns?: ";
    cin >> columns;
        
    cout << "Symbol: ";
    cin >> symbol;
    
    

    for(int rows = 1; rows <= 3; rows++){
        for(int columns = 1; columns <= 10; columns+){
            cout << symbol << ' ';

        }
        cout << '\n';
    }
}



