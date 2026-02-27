/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: YYYY-MM-DD
 */
#include <filesystem>
#include <iostream>
#include <vector>
#include <cctype>
#include <cstdlib>
using namespace std;



void menu(){
  system("clear");
  cout << "======== MENU =======";
  cout << "\nA. Calculate Items: ";
  cout << "\nB. Allocate Money";
  cout << "\nC. Balance";
  cout << "\nD. Total"; 
  cout << "\nE. Add Item";
}





void categories(){
  
    char ans;
    system("clear");
    cout << "====== Categories ======";
    cout <<"\nA. School Supplies";
    cout <<"\nB. Clothes";
    cout <<"\nC. Hygiene";
    cout <<"\nD. Groceries";
    cout <<"\nE. School Fees";
    cout <<"\nF. Other Expenses";
    cout << "\nEnter Category: ";
    cin >> ans;
    system("clear");
    switch (tolower(ans)) {
      case 'a':
      cout << "===== School Supplies ====="<<endl;
      break;
      case 'b':
      cout << "===== Clothes ====="<<endl;
      break;
      case 'c':
      cout << "===== Hygiene ====="<<endl;
      break;
      case 'd':
      cout << "===== Groceries ====="<<endl;
      break;
      case 'e':
      cout << "===== School Fees ====="<<endl;
      break;
      case 'f':
      cout << "===== Other Expenses ======"<<endl;
      break;
      default:
        break;
      
    }

}


void calcItems(double &balance){
      char choice;
      double total = 0;
      double alloc = balance;
      do{
        int numberOfItems;
        categories();
        cout << "Enter Number of Items: ";
        cin >> numberOfItems;
        vector<double> Items(numberOfItems);
          
        for(int i = 0; i < numberOfItems; i++){
            cout << "Enter Price for Item "<<i+1<<": ";
            cin >> Items[i];
            
        }
        system("clear");
        cout <<"ITEMS\t\tPRICES"<<endl;
        for(int i = 0; i < numberOfItems; i++){
            cout << "Item "<<i+1<<"\t\t  "<<Items[i]<<endl;
            total+=Items[i];
        }
        cout << "\nTotal Amount: "<<total;
        balance-=total;
        if(total > alloc){
                double change = total - alloc;
                cout << "\nYou have exceeded the Allocated Amount with a total of: "<<change<<" Php";
                cout << "\nYour Allocated Money: "<<alloc<<" Php";

        }
        else{
            cout << "\nCurrent Balance: "<<balance;   
        }

                   
        cout <<"\nAdd Another Item? [y/n]: ";
        cin >> choice;
      }while(tolower(choice) == 'y');
}




int main() {
    double currentBalance = 0;
    double allocatedAmount;
    char choice;

    do {
         char menuOptions;
         menu();
         cout << "\nEnter your choice: ";
         cin >> menuOptions;
         
        switch (tolower(menuOptions)) {
          case 'a':
            calcItems(currentBalance);
            break;
          case 'b':
            cout << "Enter Amount You Want to Allocate: ";
            cin >> allocatedAmount;
            currentBalance += allocatedAmount;
            break;
          case 'c':
            cout << "Current Balance: "<<currentBalance;
            break;
          case 'd':
            break;      
        }
        
        
                
        cout << "\nMenu [1]\nExit [2]\nEnter your choice: ";
        cin >> choice;
        cin.ignore();
    } while(choice == '1');
    return 0;
}

