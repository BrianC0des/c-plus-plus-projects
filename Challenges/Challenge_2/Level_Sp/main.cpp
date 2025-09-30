#include <iostream>
using namespace std;


/* 
Level S+ (Simulation),
Problem:
Create a login system.

Preset username = "admin", password = "1234".,
Give the user 3 attempts to enter both correctly.,
If successful → print "Access Granted".,
If all 3 fail → print "Account Locked". */

int main(){
    string username;
    string password;
    int attempts = 3;
    while(attempts > 0){
        //Get username and password
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        
        //check if inputs match the correct credentials
        //if output is correct it will output the following messsage and stop the program.
        if(username == "admin" && password == "1234"){
            cout << "Access granted";
            break;
        }
        //If input is not correct it will output the following message.
        //it will also show how many attempts the user has.
        else{
            cout << "Wrong Username or Password Please Try Again!"<<endl;
            cout <<"You have "<< attempts-1 << " remaining attempts"<<endl;
        }


        attempts--;
    }

    return 0;
}