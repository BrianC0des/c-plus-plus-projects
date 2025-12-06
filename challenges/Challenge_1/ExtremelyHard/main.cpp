#include <iostream>
#include <cstdlib>
using namespace std;



double deposit_money(double balance, double deposit){
    return balance += deposit;
}
double withdraw_money(double balance, double withdraw){
    return balance -= withdraw;
}
double deposit_validation(double deposit){
    while(true){
        if(deposit < 0){
        cout <<"Deposit amount must not be less than zero: ";
        cin >> deposit;   
        }
        else{
            break;
        }
    }
    return deposit;
    
}
double withdraw_validation(double balance, double withdraw){
    while(true){
        if(balance < withdraw){
            cout <<"Withdraw amount must not exceed the current balance: ";
            cin >> withdraw;
        }
        else{
            break;
        }
    }
    return withdraw;

}

   

int main() {
    double balance = 1000;
    double deposit;
    double withdraw;
    char choice;
    
    do{
        
        cout << "======= Welcome to ATM ======="<< endl;
        cout << "1. Check Balance" <<endl;
        cout << "2. Deposit " <<endl;
        cout << "3. Withdraw " <<endl;
        cout << "4. Exit " <<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout <<'\n';
        system("clear");
        switch (choice)
        {
            case '1':
            cout << "Balance: "<< balance << endl;
            break;   

            case '2':
            cout << "Enter the amount to deposit: ";
            cin >> deposit;
            deposit = deposit_validation(deposit);
            balance = deposit_money(balance, deposit);
            cout << "Balance: "<< balance <<endl;
            break;

            case '3':
            cout << "Enter the amount to withdraw: ";
            cin >> withdraw;
            withdraw = withdraw_validation(balance, withdraw);
            balance = withdraw_money(balance, withdraw);
            cout << "Balance: "<< balance <<endl;
            break;

            case '4':
            cout << "Program Ended "<<endl;
            break;

            
            default:
                break;
            }
    }while(choice != '4');


    
    return 0;
}