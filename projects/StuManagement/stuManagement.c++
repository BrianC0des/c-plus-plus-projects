#include <iostream>
#include <fstream>
using namespace std;

class studentManager
{
    string lrn, name, cNum, gmail, address, search;
    fstream file;

public:
    void addStu();
    void viewStu();
    void searchStu();
} obj;

int main()
{

    char choice;
    cout << "------------------------------" << endl;
    cout << "1 - Add Student Record" << endl;
    cout << "2 - View All Student Record" << endl;
    cout << "3 - Search Student Record" << endl;
    cout << "4 - Exit" << endl;
    cout << "------------------------------" << endl;
    cin >> choice;

    switch (choice)
    {
    case '1':
        cin.ignore();
        obj.addStu();
        break;

    case '2':
        cin.ignore();
        obj.viewStu();
        break;

    case '3':
        cin.ignore();
        obj.searchStu();
        break;

    case '4':
        return 0;
        break;
    default:
        cout << "Invalid Choice...!";
    }
}

void studentManager ::addStu()
{
    cout << "Enter Student LRN :: ";
    getline(cin, lrn);
    cout << "Enter Student Name:: ";
    getline(cin, name);
    cout << "Enter Student Contact Number :: ";
    getline(cin, cNum);
    cout << "Enter Student Gmail Address :: ";
    getline(cin, gmail);
    cout << "Enter Student Address :: ";
    getline(cin, address);

    file.open("stuData.txt", ios ::out | ios ::app);
    file << lrn << "*";
    file << name << "*";
    file << cNum << "*";
    file << gmail << "*";
    file << address << endl;
    file.close();
}

void studentManager ::viewStu()
{

    file.open("stuData.txt", ios ::in);
    getline(file, lrn, '*');
    getline(file, name, '*');
    getline(file, cNum, '*');
    getline(file, gmail, '*');
    getline(file, address, '\n');
    while (!file.eof())
    {
        cout << "\n";
        cout << "Student LRN:: " << lrn << endl;
        cout << "Student Name:: " << name << endl;
        cout << "Student Contact Number:: " << cNum << endl;
        cout << "Student Gmail Address:: " << gmail << endl;
        cout << "Student Address:: " << address << endl;

        getline(file, lrn, '*');
        getline(file, name, '*');
        getline(file, cNum, '*');
        getline(file, gmail, '*');
        getline(file, address, '\n');
    }
    file.close();
}

void studentManager ::searchStu()
{

    cout << "Enter Student LRN :: ";
    getline(cin, search);

    file.open("stuData.txt", ios ::in);
    getline(file, lrn, '*');
    getline(file, name, '*');
    getline(file, cNum, '*');
    getline(file, gmail, '*');
    getline(file, address, '\n');
    while (!file.eof())
    {
        if (lrn == search)
        {
            cout << endl;
            cout << "Student LRN :: " << lrn << endl;
            cout << "Student Name :: " << name << endl;
            cout << "Student Contact Number :: " << cNum << endl;
            cout << "Student Gmail Address ::" << gmail << endl;
            cout << "Student Address :: " << address << endl;
        }
        getline(file, lrn, '*');
        getline(file, name, '*');
        getline(file, cNum, '*');
        getline(file, gmail, '*');
        getline(file, address, '\n');
    }
    file.close();
}