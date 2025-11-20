#include <iostream>
using namespace std;


int authenticator();
double depositMoney(double amount, double balance);
double withdrawMoney(double amount, double balance);
void inquireBal(double balance);
char menu();

int main(){
    
    char r;
    int attempts = 2;    
    double balance = 0;
    
    do{
        int pin = authenticator();

        if(pin == 12345){
            do{
                char choice = menu();
                double amount;
                switch (choice)
                {
                case '1':
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        balance = depositMoney(amount, balance);
                        cout << "Transanction Successful!"<<endl;
                        cout << "Balance: "<<balance<<endl;
                        
                        break;
                        
                        case '2':
                        while(true){
                            cout << "Enter amount to withdraw: ";
                            cin >> amount;
                            if(amount > balance){
                                cout << "Insufficient Balance Please Try Again!"<<endl;
                                cout << "Balance: "<<balance<<endl;
                            }
                            else{
                                balance = withdrawMoney(amount, balance);
                                cout << "Transanction Successful!"<<endl;
                                cout << "Balance: "<<balance<<endl;
                                break;
                            }
                        }
                            
                    break;

                case '3':
                    
                    cout <<"Your Balance is: " <<balance<<endl;
                    break;
                    
                    case '4':
                    system("clear");
                    cout << "Thank you for using our bank!"<<endl;
                    return 0;

                default:
                    break;
                }
                cout << "Do you want to try again!: ";
                cin >> r;
            }while(r == 'y' || r == 'Y');
            cout << "Thank you for using our bank!"<<endl;
            return 0;
        }
        else if(pin != 12345){
            cout << "Please try again!"<<endl;
            cout <<"Remaining Attempts: "<<attempts<<endl;
            attempts--;
        }
                    
    
    }while(attempts >= 0);
    cout << "Account Locked!";
    return 0;
}





double depositMoney(double amount, double balance){
    return balance + amount;

    
}
double withdrawMoney(double amount, double balance){
    return balance - amount;


}
void inquireBal(double balance){
    cout << "Your balance is: "<<balance<<endl;

}
char menu(){
    char choice;
    system("clear");
    cout << "========== XYZ Bank =========="<<endl;
    cout << "[1] DEPOSIT"<<endl;
    cout << "[2] WITHDRAW"<<endl;
    cout << "[3] INQUIRE"<<endl;
    cout << "[4] EXIT"<<endl;

    cout <<"Enter transaction: ";
    cin >> choice;

    return choice;


}   

int authenticator(){
    int pin;
    cout << "Enter a PINCODE: ";
    cin >> pin;
    return pin;
   
}

