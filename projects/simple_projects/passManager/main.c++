#include <iostream>
#include <fstream>
using namespace std;


class passManager{
    string platform, email, password, search;
    fstream file;

    public:
        void addAcc();
        void viewAcc();
        void searchAcc();
        void delAcc();


}obj;


int main(){

    char choice;

    cout<<"---------------------------\n";
    cout<<"1 - Add Account"<<endl;
    cout<<"2 - View Account"<<endl;
    cout<<"3 - Search Account"<<endl;
    cout<<"4 - Delete Account"<<endl;
    cout<<"5 - EXIT"<<endl;
    cout<<"---------------------------\n";
    cin>>choice;


    switch(choice){

     case '1':
        cin.ignore();
        obj.addAcc();
        break;
     case '2':
        cin.ignore();
        obj.viewAcc();
        break;

     case '3':
        cin.ignore();
        obj.searchAcc();
        break;

     case '4':
        cin.ignore();
        obj.delAcc();
        break;

    case '5':
            return 0;
            break;
        default:
            cout<<"Incvalid!";
    }
        
}




void passManager :: addAcc(){
    cout<<"Enter Platform:: ";
    getline(cin, platform);
    cout<<"Enter Account Email:: ";
    getline(cin, email);
    cout<<"Enter Account Password:: ";
    getline(cin, password);

    file.open("passData.txt", ios :: out | ios :: app);
    file<<platform<<"|";
    file<<email<<"|";
    file<<password<<"\n";
    file.close();


}



void passManager :: viewAcc(){
    
    file.open("passData.txt", ios :: in);
    getline(file, platform,'|');
    getline(file, email,'|');
    getline(file, password,'\n');
    while(!file.eof()){
        cout<<"\n";
        cout<< "Platform:: " << platform << endl;
        cout<< "Email:: " << email << endl;
        cout<< "Password:: " << password << endl;

        getline(file, platform,'|');
        getline(file, email,'|');
        getline(file, password,'\n');

        
    }
    file.close();




}


void passManager :: searchAcc(){
    cout<<"Enter Platform ::";
    getline(cin, search);

    file.open("passData.txt", ios :: in);
    getline(file, platform,'|');
    getline(file, email, '|');
    getline(file, password,'\n');
    while (!file.eof()){

        if (platform == search)
        {
            cout<<endl;
            cout<< "Platform:: "<<platform<<endl;
            cout<< "Email:: "<<email<<endl;
            cout<< "Password:: "<<platform<<endl;
        }
        getline(file, platform,'|');
        getline(file, email,'|');
        getline(file, password,'\n');
    }
    file.close();


}



void passManager :: delAcc()
{

    string delPlatform;
    cout<<"Enter Platform to Delete:: ";
    getline(cin, delPlatform);


    ifstream inFile("passData.txt");
    ofstream tempFile("temp.txt");
    string platform, email, password;

    while(getline(inFile, platform, '|') &&
          getline(inFile, email, '|') &&
          getline(inFile, password, '\n')){

            if(platform != delPlatform){
                tempFile << platform << '|' << email << '|' << password << '\n';
            }

          }

          inFile.close();
          tempFile.close();

          remove("passData.txt");
          rename("temp.txt", "passData.txt");

          cout << "Account Deleted (if existed). "<< endl;


}