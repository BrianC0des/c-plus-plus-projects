#include <iostream>
using namespace std;

int main() {
    int guess;
    int secret_number = 6;
    cout << "Enter a guess:" << endl;
    cin >> guess;
    while(guess != secret_number){
        if(guess < secret_number){
            cout << "Too Low! Enter again another number: ";
            cin >> guess;
        }
        else{
            cout << "Too High Enter again another number: ";
            cin >> guess;
        }
        
    }
    cout << "You guess it right! ";





    return 0;
}