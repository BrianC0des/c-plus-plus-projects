// MANOGURA, JAY JASPER N. 
//BSCS-1B

#include <iostream>
using namespace std;

int main (){
    int x, y;
    char choice;

    while (choice !=x){

        cout << "Let's find where the x and y axis intersect." << endl;
    
        cout << "Enter the value of x:  " <<endl;
        cin >> x;
        cout << "Enter the value of y: " <<endl;
        cin >> y;

        if (x == 0 && y == 0){
            cout << "The x and y axis intersect at the origin (0,0)" << endl;
        }
        else if (x > 0 && y > 0){
            cout << "The x and y axis intersect at the first quadrant (" << x << "," << y << ")" << endl;
        }
        else if (x < 0 && y > 0){
            cout << "The x and y axis intersect at the second quadrant (" << x << "," << y << ")" << endl;
        }
        else if (x < 0 && y < 0){
            cout << "The x and y axis intersect at the third quadrant (" << x << "," << y << ")" << endl;
        }
        else if (x > 0 && y < 0){
            cout << "The x and y axis intersect at the fourth quadrant (" << x << "," << y << ")" << endl;
        }
        else if (x == 0){
            cout << "The x and y axis intersect at the x-axis (" << x << "," << y << ")" << endl;
        }
        else if (y == 0){
            cout << "The x and y axis intersect at the y-axis (" << x << "," << y << ")" << endl;
        }
        else {
            cout << "Invalid input!" << endl;
        }
        cout << "Do you want to try again? (y/n): " <<endl;
        cin >>  choice;
        if (choice == 'n' || choice == 'N'){
            break;
        }
    }
    cout << "The program has been ended, thank you ";

    return 0;
}