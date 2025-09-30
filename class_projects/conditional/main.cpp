
#include <iostream>
using namespace std;





double prices_discounter(){
   double sackRice_prices = 950; 
   double toothpaste_prices = 55.00; 
   double canGood_prices = 30;
   int num_of_sackRice;
   int num_of_toothPaste;
   int num_of_canGood;
   double amount_to_pay;

   cout << "Items\t\tPrices"<<endl;
   cout << "1 Sack Rice\t"<< sackRice_prices  <<endl;
   cout << "1 ToothPaste\t"<< toothpaste_prices <<endl;
   cout << "1 Can Good\t"<< canGood_prices <<endl;

   cout << "Enter number of rice: "<<endl;
   cin >> num_of_sackRice;
   cout << "Enter number of toothpaste: "<<endl;
   cin >> num_of_toothPaste;
   cout << "Enter number of can goods: "<<endl;
   cin >> num_of_canGood;
   
   amount_to_pay = (num_of_sackRice * sackRice_prices) + (num_of_toothPaste * toothpaste_prices) + (num_of_canGood * canGood_prices);

   if(amount_to_pay >= 2001){
        double discount = 0.10;
        double discounted_price = amount_to_pay * discount;
        double total_payment = amount_to_pay - discounted_price;
        cout << "Payment before Discount: " << amount_to_pay << endl;
        cout << "Discounted Price (10%): " << discounted_price << endl;
        cout << "Total Payment: " << total_payment << endl;
   }
   else if (amount_to_pay >= 1501){
        double discount = 0.05;
        double discounted_price = amount_to_pay * discount;
        double total_payment = amount_to_pay - discounted_price;
        cout << "Payment before Discount: " << amount_to_pay << endl;
        cout << "Discounted Price (5%): " << discounted_price << endl;
        cout << "Total Payment: " << total_payment << endl;
   }
   else{
        double discount = 0.01;
        double discounted_price = amount_to_pay * discount;
        double total_payment = amount_to_pay - discounted_price;
        cout << "Payment before Discount: " << amount_to_pay << endl;
        cout << "Discounted Price (1%): " << discounted_price << endl;
        cout << "Total Payment: " << total_payment << endl;cout << "Enter number of toothpaste: "<<endl;
   
   }
   return 0;
};


int main(){
   prices_discounter();

   char choice;
   while(true){
    cout << "Do you want to buy again? [Y/N]: "<<endl;
    cin >> choice;

    if(choice == 'Y' || choice == 'y'){
        prices_discounter();
    }

   
    else if(choice == 'N' || choice == 'n'){
        cout << "THANK YOU FOR SHOPPING DONT COME AGAIN";
        break;
    }


}
return 0;
}