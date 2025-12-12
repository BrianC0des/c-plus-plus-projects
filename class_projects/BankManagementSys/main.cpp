#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

// Bryan P. Saavedra
// BSCS 1B
// HEllO
// global balance
double balance;

// my functions

double getBalance(int userId);
void getAccount(int userId, int &accID, int &accPIN);
int authenticatorMenu();
void createAccount(int userId, int pin, double balance);
double depositMoney(double amount, int userId, int pin);
double withdrawMoney(double amount, int userId, int pin);
int menu();
void clearInputBuffer();

// my main function
int main() {
  double prevBal;
  int r;
  int attempts = 3;
  char cont;

  do {
    int choice = authenticatorMenu();
    if (choice == 1) {

      do {

        int ID, PIN;
        int userID, pincode;
        cout << "Enter ID number: ";
        while (!(cin >> userID)) {
          cout << "Error! Enter a number: ";
          clearInputBuffer();
        }
        cout << "Enter PINCODE: ";
        while (!(cin >> pincode)) {
          cout << "Error! Enter a number: ";
          clearInputBuffer();
        }

        getAccount(userID, ID, PIN);
        balance = getBalance(userID);

        if (userID == ID && pincode == PIN) {
          do {
            int choice = menu();
            double amount;
            switch (choice) {
            case 1:
              cout << "Enter amount to deposit: ";
              while (!(cin >> amount)) {
                cout << "Error! Enter a number: ";
                clearInputBuffer();
                continue;
              }
              prevBal = balance;
              balance = depositMoney(amount, userID, pincode);
              system("clear");
              cout << "Transanction Successful!" << endl;
              cout << "========= Deposit Receipt =========" << endl;
              cout << "Initial balance: " << prevBal << endl;
              cout << "Amount Deposited: " << amount << endl;
              cout << "New Balance: " << balance << endl;
              cout << endl;

              // cout << "Transanction Successful!"<<endl;
              // cout << "Balance: "<<balance<<endl;

              break;

            case 2:
              while (true) {
                cout << "Enter amount to withdraw: ";
                while (!(cin >> amount)) {
                  cout << "Error! Enter a number: ";
                  clearInputBuffer();
                  continue;
                }
                if (amount > balance) {
                  cout << "Insufficient Balance Please Try Again!" << endl;
                  cout << "Balance: " << balance << endl;
                } else {
                  prevBal = balance;
                  balance = withdrawMoney(amount, userID, pincode);
                  system("clear");
                  cout << "Transanction Successful!" << endl;
                  cout << "========= Withdrawal Receipt =========" << endl;
                  cout << "Initial balance: " << prevBal << endl;
                  cout << "Amount Withdrawn: " << amount << endl;
                  cout << "New Balance: " << balance << endl;
                  cout << endl;

                  break;
                }
              }

              break;

            case 3:
              system("clear");
              cout << "Your Balance is: " << balance << endl;
              break;

            case 4:
              system("clear");
              cout << "Thank you for using our bank!" << endl;
              return 0;

            default:
              break;
            }
            cout << "========== BDO Bank ==========" << endl;
            cout << "[1] MENU\n[2] EXIT" << endl;
            cout << "Enter your choice: ";
            while (!(cin >> r)) {
              cout << "Error! Enter a number: ";
              clearInputBuffer();
            }
          } while (r == 1);
          cout << "Thank you for using our bank!" << endl;
          return 0;
        } else if (userID != ID || pincode != PIN) {
          cout << "Please try again!" << endl;
          cout << "Remaining Attempts: " << attempts << endl;
          attempts--;
        } else {
          cout << "Invalid Inputs!";
          return 0;
        }

      } while (attempts != 0);
      cout << "Account Locked!" << endl;
    } else if (choice == 2) {
      int pin, cpin, userId;
      cout << "Enter your ID number: ";
      cin >> userId;
      while (true) {
        cout << "Enter your pincode: ";
        cin >> pin;
        cout << "Confirm your pincode: ";
        cin >> cpin;
        if (cpin != pin) {
          cout << "Pin not match! Please try again!" << endl;

        } else {
          cout << "Enter Initial Balance: ";
          cin >> balance;
          createAccount(userId, pin, balance);
          break;
        }
      }
    } else {
      cout << "Invalid Input" << endl;
    }
    cout << "Back to Login Page? [Y/n]: ";
    cin >> cont;
  } while (cont == 'y' || cont == 'Y');
  cout << "Thank you for using our bank!";

  return 0;
}

// memu func
int menu() {
  int choice;

  system("clear");
  cout << "========== BDO Bank ==========" << endl;
  cout << "[1] DEPOSIT" << endl;
  cout << "[2] WITHDRAW" << endl;
  cout << "[3] INQUIRE" << endl;
  cout << "[4] EXIT" << endl;
  cout << "Enter transaction: ";
  while (!(cin >> choice)) {
    cout << "Error! Enter a number: ";
    clearInputBuffer();
  }

  return choice;
}

// Login and Sign Up Menu func
int authenticatorMenu() {
  int choice;
  system("clear");
  cout << "========== BDO Bank ==========" << endl;
  cout << "[1] Login" << endl;
  cout << "[2] Sign Up" << endl;
  cout << "Enter your choice: ";
  while (!(cin >> choice)) {
    cout << "Error! Enter a number: ";
    clearInputBuffer();
  }
  cout << endl;
  system("clear");
  return choice;
}

// create acc func
void createAccount(int userId, int pin, double balance) {
  string ext = ".txt";
  string filename = to_string(userId) + ext;
  fstream studentFile(filename, ios::out);

  studentFile << "ID : " << userId << endl;
  studentFile << "PIN : " << pin << endl;
  studentFile << "BALANCE : " << balance << endl;
  studentFile << endl;

  studentFile.close();
  system("clear");
  cout << "Account Created Successfully!" << endl;
}

// get account func
void getAccount(int userId, int &accID, int &accPIN) {
  string ext = ".txt";
  string filename = to_string(userId) + ext;
  fstream studentFile(filename, ios ::in);

  string word;

  studentFile >> word >> word >> accID;
  for (int i = 1; i <= 1; i++) {
    studentFile >> word >> word >> accPIN;
  }

  studentFile.close();
}

// get balance func
double getBalance(int userId) {
  string ext = ".txt";
  string filename = to_string(userId) + ext;
  fstream studentFile(filename, ios ::in);

  string word;
  double balance;

  for (int i = 1; i <= 3; i++) {
    studentFile >> word >> word >> balance;
  }

  studentFile.close();
  return balance;
}

// deposit func
double depositMoney(double amount, int userId, int pin) {
  string ext = ".txt";
  string filename = to_string(userId) + ext;
  ofstream studentFile(filename);

  string word;
  double newBalance = balance + amount;

  studentFile << "ID : " << userId << endl;
  studentFile << "PIN : " << pin << endl;
  studentFile << "BALANCE : " << newBalance;

  studentFile.close();
  return newBalance;
}

// withdraw func
double withdrawMoney(double amount, int userId, int pin) {
  string ext = ".txt";
  string filename = to_string(userId) + ext;
  ofstream studentFile(filename);

  string word;
  double newBalance = balance - amount;

  studentFile << "ID : " << userId << endl;
  studentFile << "PIN : " << pin << endl;
  studentFile << "BALANCE : " << newBalance;

  studentFile.close();
  return newBalance;
}

// error handler
void clearInputBuffer() {
  cin.get();
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
