// #include <fstream>
#include <cstdlib>
#include <iostream>
#include <limits>
using namespace std;

// Bryan P. Saavedra
// BSCS 1B
// HEllO
// global balance
double balance;

int signUpPage(int &newID, int &newPIN);
void loginPage();

void menuPage();
void createAccount();
int getAccount();

double withdrawMoney();
double depositMoney();
double getBalance();

void depositReceipt();
void withdrawReceipt();
void showBalance();
void clearInputBuffer();

int main() {
  int userID, userPIN;
  signUpPage(userID, userPIN);
  loginPage();

  return 0;
}

int signUpPage(int &newID, int &newPIN) {
  int cPIN, attempts = 3;
  cout << "========= SIGN UP! ========" << endl;
  cout << "Enter Your ID: ";
  cin >> newID;
  do {
    attempts--;
    cout << "Enter your PINCODE: ";
    cin >> newPIN;
    cout << "Confirm your PINCODE: ";
    cin >> cPIN;

    if (newPIN != cPIN) {
      system("clear");
      cout << "PIN did not match! Please Try Again!" << endl;
      cout << "Remaining Attempts: " << attempts << endl;

    } else if (newPIN == cPIN && attempts > 0) {

      cout << "Account Created Successfully!";
      return 0;
    }

  } while (newPIN != cPIN && attempts != 0);
  cout << "You ran out of attempts! Please Try Again Later!";
  return newID = 0, newPIN = 0;
}

void loginPage() {
  int userID, userPIN;
  cout << "========= Welcome to BankDEV ========" << endl;
  cout << "Enter your ID: ";
  while (!(cin >> userID)) {
    cout << "Invalid Input! Enter a number: " << endl;
    clearInputBuffer();
  }
  cout << "Enter your PINCODE: ";
  cin >> userPIN;
}

void menuPage();

void createAccount();
int getAccount();

double withdrawMoney();
double depositMoney();
double getBalance();

void depositReceipt();
void withdrawReceipt();
void showBalance();

void clearInputBuffer() {
  cin.get();
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
