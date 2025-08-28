
#include <iostream>
using namespace std;




int main(){
    int coke_price = 30;
    int hamspread_price = 50;
    int slicebread_price = 60;


    cout << "ITEM\t           PRICE" << endl;
    cout << "Coke\t\t    "<<coke_price << endl;
    cout << "Hamspread\t    "<<hamspread_price << endl;
    cout << "Slicebread\t    "<<slicebread_price <<endl;

    int num_cokes;
    int num_hamspread;
    int num_slicebread;


    cout << "Coke: ";
    cin >> num_cokes;
    cout << "Hamspread: ";
    cin >> num_hamspread;
    cout << "Slicebread: ";
    cin >> num_slicebread;


    double total_cokes = coke_price * num_cokes;
    double total_hamspread = hamspread_price * num_hamspread;
    double total_slicebread = slicebread_price * num_slicebread;
    double total_amount = total_cokes + total_hamspread + total_slicebread;


    cout << "Amount to pay: " << total_amount;









    return 0;
}