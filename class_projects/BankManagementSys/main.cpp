#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

double balance;



double getBalance(int userId);
void getAccount(int userId, int &accID, int &accPIN);
char authenticatorMenu();
void createAccount(int userId, int pin, double balance );
double depositMoney(double amount, int userId, int pin);
double withdrawMoney(double amount, int userId, int pin);
char menu();
void clearInputBuffer();



int main(){
    char r;
    int attempts = 2;    
    char cont;

    do{   
        char choice = authenticatorMenu();
        if(choice == '1'){
            
            do{
                int ID, PIN;
                int userID, pincode;
                cout << "Enter ID number: ";
                cin >> userID;
                cout << "Enter PINCODE: ";
                cin >> pincode;
                    
                
                getAccount(userID,ID,PIN);
                balance = getBalance(userID);
            

                
                if( userID == ID && pincode == PIN ){
                    do{
                        char choice = menu();
                        double amount;
                        switch (choice)
                        {
                        case '1':
                                cout << "Enter amount to deposit: ";
                                cin >> amount;
                                balance = depositMoney(amount, userID, pincode);
                                system("clear");
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
                                        balance = withdrawMoney(amount, userID, pincode);
                                        system("clear");
                                        cout << "Transanction Successful!"<<endl;
                                        cout << "Balance: "<<balance<<endl;
                                        break;
                                    }
                                }
                                    
                            break;

                        case '3':
                            system("clear");
                            cout <<"Your Balance is: " <<balance<<endl;
                            break;
                            
                            case '4':
                            system("clear");
                            cout << "Thank you for using our bank!"<<endl;
                            return 0;

                        default:
                            break;
                        }
                        cout <<"========== BDO Bank =========="<<endl;
                        cout << "[1] MENU\n[2] EXIT"<<endl;
                        cout << "Enter your choice: ";
                        cin >> r;
                    }while(r == '1');
                    cout << "Thank you for using our bank!"<<endl;
                    return 0;
                }
                else if(userID != ID || pincode != ID){
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
            int pin, cpin, userId;
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
        cout << "Back to Login Page? [Y/n]: ";
        cin >> cont;
    }while(cont == 'y' || cont == 'Y');
    cout << "Thank you for using our bank!";
    
    return 0;
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
    system("clear");
    cout << "========== BDO Bank =========="<<endl;
    cout << "[1] Login"<<endl;
    cout << "[2] Sign Up"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout <<endl;
    system("clear");
    return choice;
   
}


void createAccount(int userId, int pin, double balance){
    string ext = ".txt";
    string filename = to_string(userId) + ext; 
    string filepath = "accountsDatabase/" + filename;
    fstream studentFile(filepath, ios::out);
    
    if(!studentFile){
        cout << "Error opening file!";
    }

    studentFile <<"ID : "<<userId<<endl;
    studentFile <<"PIN : " << pin<<endl;
    studentFile <<"BALANCE : " << balance<<endl;
    studentFile <<endl;
    
    studentFile.close();
    system("clear");
    cout << "Sign Up Successfully!"<<endl;   
    
}

void getAccount(int userId, int &accID, int &accPIN){
    string ext = ".txt";
    string filename = to_string(userId) + ext; 
    string filepath = "accountsDatabase/" + filename;
    fstream studentFile(filepath, ios :: in);
    
    if(!studentFile){
        cout << "Error opening file!";
    }
    string word;
    
    studentFile >> word >> word >>accID;
    for(int i = 1; i <= 1; i++){
        studentFile >> word >> word >> accPIN;
    }
        
    studentFile.close(); 
    
}


double getBalance(int userId){
    string ext = ".txt";
    string filename = to_string(userId) + ext; 
    string filepath = "accountsDatabase/" + filename;
    fstream studentFile(filepath, ios :: in);
    
    if(!studentFile){
        cout << "Error opening file!";
    }
    string word;
    double balance;
    
    for(int i = 1; i <= 3; i++){
        studentFile >> word >> word >> balance;
    }

    studentFile.close(); 
    return balance;
}

double depositMoney(double amount, int userId, int pin){
    string ext = ".txt";
    string filename = to_string(userId) + ext; 
    string filepath = "accountsDatabase/" + filename;
    ofstream studentFile(filepath);
    
    if(!studentFile){
        cout << "Error opening file!";
    }
    string word;
    double newBalance = balance + amount;

    studentFile <<"ID : "<<userId<<endl;
    studentFile <<"PIN : " << pin<<endl;
    studentFile << "BALANCE : " << newBalance;
    
    studentFile.close(); 
    return newBalance;    
     
}


double withdrawMoney(double amount, int userId, int pin){
    string ext = ".txt";
    string filename = to_string(userId) + ext; 
    string filepath = "accountsDatabase/" + filename;
    ofstream studentFile(filepath);
    
    if(!studentFile){
        cout << "Error opening file!";
    }
    string word;
    double newBalance = balance - amount;

    studentFile <<"ID : "<<userId<<endl;
    studentFile <<"PIN : " << pin<<endl;
    studentFile << "BALANCE : " << newBalance;
    
    studentFile.close(); 
    return newBalance;    
    
    
}

