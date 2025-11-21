#include <iostream>
#include <fstream>

using namespace std;

string getAccount();
char authenticatorMenu();
void createAccount(string userId, string pin, double balance );
double depositMoney(double amount, double balance);
double withdrawMoney(double amount, double balance);
void inquireBal(double balance);
char menu();

int main(){
    
    char r;
    int attempts = 2;    
    double balance = 0;
    char choice = authenticatorMenu();
    if(choice == '1'){

        do{
            string name, pincode;
            cout << "Enter ID number: ";
            cin >> name;
            cout << "Enter PINCODE: ";
            cin >> pincode;

            
            if("12345" == pincode){
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
            else if(pincode != "12345"){
                cout << "Please try again!"<<endl;
                cout <<"Remaining Attempts: "<<attempts<<endl;
                attempts--;
            }
            else{
                cout << "Invalid Inputs!";
                break;
            }
                        
        
        }while(attempts >= 0);
        cout << "Account Locked!";
    }
    else if(choice == '2'){
        string pin, cpin, userId;
        cout << "Enter your ID number: ";
        cin >> userId;
        while(true){
            cout << "Enter your pincode: ";
            cin >> pin;
            cout << "Confirm your pincode: ";
            cin >> cpin;
            if(cpin != pin){
                cout << "Pin not match! Please try again!"<<endl;

            }
            else{
                cout << "Enter Initial Balance: ";
                cin >> balance;
                createAccount(userId, pin, balance);
                break;
            }
        }

        
    }
    
    
    
    
    
    
    
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
        cout << "========== BDO Bank =========="<<endl;
        cout << "[1] DEPOSIT"<<endl;
        cout << "[2] WITHDRAW"<<endl;
        cout << "[3] INQUIRE"<<endl;
        cout << "[4] EXIT"<<endl;
        cout <<"Enter transaction: ";
        cin >> choice;
        
    return choice;


}   

char authenticatorMenu(){
    char choice;
    cout << "[1] Login"<<endl;
    cout << "[2] Sign Up"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout <<endl;
    return choice;


   
}




void createAccount(string userId, string pin, double balance){
    string ext = ".txt";
    string filename = userId + ext; 
    fstream studentFile(filename, ios::out);
    
    if(!studentFile){
        cout << "Error opening file!";
    }

    studentFile <<"ID :"<<userId<<endl;
    studentFile <<"PIN :" << pin<<endl;
    studentFile <<"BALANCE: " << balance<<endl;
    studentFile <<endl;
    
    studentFile.close();
    cout << "Sign Up Successfully!"<<endl;   




}

// string getAccount(){
//     fstream studentFile("Account.txt");
    
//     if(studentFile){
//         string line;
//         while(getline(studentFile, line)){
//             return line;
//         }
//         studentFile.close();   

//     }



// }