// #include <fstream>
#include <iostream>
#include <string>
// #include <limits>
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

int main() {
  int userID, userPIN;
  signUpPage(userID, userPIN);
  cout << userID << userPIN;

  return 0;
}

int signUpPage(int &newID, int &newPIN) {
  int cPIN, attempts = 3;
  int idLen = to_string(newID).size();
  int pinLen = to_string(newPIN).size();

  do {
    attempts--;
    do {
      cout << "========= SIGN UP! ========" << endl;
      cout << "Enter Your ID: ";
      cin >> newID;
      cout << '\n';
      cout << "Enter your PINCODE: ";
      cin >> newPIN;
      cout << "Confirm your PINCODE: ";
      cin >> cPIN;

      if (idLen > 9) {
        cout << "ID Number must not exceed 9 integers!" << endl;
        cout << "Please try again!" << endl;
      }
      if (pinLen > 6)
        cout << "ID Number must not exceed 9 integers!" << endl;
      cout << "Please try again!" << endl;

    } while (idLen > 9 && pinLen > 6);

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

void loginPage() {}

void menuPage() {}

void createAccount();
int getAccount();

double withdrawMoney();
double depositMoney();
double getBalance();

void depositReceipt();
void withdrawReceipt();
void showBalance();
