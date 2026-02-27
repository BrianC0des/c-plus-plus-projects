/**
 * AUTHOR: Bryan P. Saavedra
 * SECTION: BSCS 1B
 * DATE: 2026-02-24
 */

#include <iostream>
#include <vector>
using namespace std;


int Input(string prompt){
    double n;
    cout << prompt;
    while (!(cin >> n)) {
        cout << "Invalid Input! Enter again: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    return n;
}


void Output(vector<vector<double>> sched, double studs,double days){
    
    vector<double> TotalPresent;
    vector<double> percent;
    vector<string> remarks;
    for (int i = 0; i < studs; i++) {
        double p = 0;
        for (int j = 0; j < days; j++) {
            p += sched[i][j];
        }
        TotalPresent.push_back(p);
    }
    

     int p;
     for (int i = 0; i < studs; i++) {
        p = (TotalPresent[i]/days)*100;
        percent.push_back(p);
     }
     string drp = "DRP";
     string ok = "OK"; 
     for (int i = 0; i < studs; i++) {
        if (percent[i] < 50) {
            remarks.push_back(drp);
        }
        else {
            remarks.push_back(ok);
        }
     }
    



    cout << "\nStudent\t";
    for (int i = 0; i < days; i++) {
        cout << "D"<<i+1<<"\t";
    }
    cout << "Total\tPercentage\tRemarks"<<endl;
    cout<< "--------";
    for (int i = 0; i < days; i++) {
        cout << "--------";
    }
    cout << "--------------------------------"<<endl;
    for (int i = 0; i < studs; i++) {
        cout << i+1<<"\t";
        for (int j = 0; j < days; j++) {
            cout<<sched[i][j]<<"\t";
        }
        cout << TotalPresent[i] <<"\t"<< percent[i]<<"%"<<"\t\t"<< remarks[i]; 
        cout << endl;
     }
     
    
}




int main() {
    char choice;
    do {
         int numberOfStudents, numberOfSchoolDays;
         numberOfStudents = Input("Enter number of students: ");          
         numberOfSchoolDays = Input("Enter number of students: ");          
        
        vector attendance(numberOfStudents, vector<double>(numberOfSchoolDays, 0));
        
        for (int stud = 0; stud < attendance.size(); stud++) {
            cout << "Student "<<stud+1<<'\t';
            cout << "[1] Present\t[0] Absent"<<endl;
            for (int day = 0; day < attendance[stud].size(); day++) {
                 cout << "Day "<<day+1<<": "<<endl;
                 cin >> attendance[stud][day];
            } 
        }
        Output(attendance, numberOfStudents, numberOfSchoolDays);
        cout << "Run the program again? [Y/y]: ";
        cin >> choice;

    
    }while (tolower(choice) == 'y');



    return 0;
}

