#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    srand(time(NULL));
    int guess1;
    int guess2;
    int guess3;

    cout << "Guess the red die: ";
    cin >> guess1;

    cout << "Guess the red die: ";
    cin >> guess2;

    cout << "Guess the red die: ";
    cin >> guess3;



    int num1 = (rand() % 6) + 1;
    cout << "red die: " << num1 << '\n';
    if (num1 == guess1){
        cout << "Your guess is correct!";
    }
    else{
        cout << "Try again!" << endl;
    }
    
    
    int num2 = (rand() % 6) + 1;
    cout << "blue die: " << num2 << '\n';
    
    if (num2 == guess2){
        cout << "Your guess is correct!";
    }
    else{
        cout << "Try again!" << endl;
    }



    int num3 = (rand() % 6) + 1;
    cout << "yellow die: " << num3 << '\n';
    if (num2 == guess3){
        cout << "Your guess is correct!";
    }
    else{
        cout << "Try again!" << endl;
    }
    
    if(num1 == guess1 and num2 == guess2 and num3 == guess3){
        cout << "You win!";
    }

    
    return 0;
}