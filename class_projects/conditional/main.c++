
#include <iostream>
using namespace std;




int main(){
    double sackRice_price = 950;
    double toothPaste_price = 55.00;
    double canGood_price = 30;
    
    cout << "ITEM\t           PRICE" << endl;
    cout << "1 Sack Rice\t    "<<sackRice_price << endl;
    cout << "1 Toothpaste\t    "<<toothPaste_price << endl;
    cout << "1 Can Good\t    "<<canGood_price <<endl;

    int num_sackRice;
    int num_toothPaste;
    int num_canGood;
    
    
    cout << "Enter the number of rice: ";
    cin >> num_sackRice;
    cout << "Enter the number of toothpaste: ";
    cin >> num_toothPaste;
    cout << "Enter the number of can good: ";
    cin >> num_canGood;
    
    
    double total_riceSack = sackRice_price * num_sackRice;
    double total_toothPaste = toothPaste_price * num_toothPaste;
    double total_canGood = canGood_price * num_canGood;
    double total_amount = total_riceSack + total_toothPaste + total_canGood;
    
    
    
    if(total_amount >= 2001){
        double discount_rate = 0.10;
        double total_discount = total_amount * discount_rate;
        double actual_payment = total_amount - total_discount;
        cout << "Total Amount: " << total_amount << endl;
        cout << "Discount (10%): " << total_discount << endl;
        cout << "Actual Payment: " << actual_payment << endl;
        
        
    }
    else if (total_amount >= 1501){
        double discount_rate = 0.05;
        double total_discount = total_amount * discount_rate;
        double actual_payment = total_amount - total_discount;
        cout << "Total Amount: " << total_amount << endl;
        cout << "Discount (5%):  " << total_discount << endl;
        cout << "Actual Payment: " << actual_payment << endl;
        
    
    
    }
    else if(total_amount >= 1000){
        double discount_rate = 0.01;
        double total_discount = total_amount * discount_rate;
        double actual_payment = total_amount - total_discount;
        cout << "Total Amount: " << total_amount << endl;
        cout << "Discount (1%): " << total_discount << endl;
        cout << "Actual Payment: " << actual_payment << endl;

    }

    
    
    return 0;
}