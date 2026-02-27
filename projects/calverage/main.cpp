/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: YYYY-MM-DD
 */

#include <bits/stdc++.h>
using namespace std;




void averageCalc(vector<vector<double>> studentTable, int stud, int  noOfscores){
    vector<double> ave;
    for(int i = 0; i < stud; i++){
        double sum = 0;  
        for(int j = 0; j < noOfscores; j++){
              sum += studentTable[i][j];
        }
        ave.push_back(sum/noOfscores);
    } 

    cout << " ====== STUDENTS DASHBOARD ====== "<<endl;
    cout << "+------------+-----------------+"<<endl;
    cout << "| Students   | Average Scores  |"<<endl;
    for(int i = 0; i < stud;i++){
        cout << "+------------+-----------------+"<<endl;
        cout << "| Student "<< i+1 <<"  | \t"<< ave[i];
        cout << " \t       |"<<endl;
    }
    cout << "+------------+-----------------+"<<endl;


    double lowest = ave[0];
    double highest = ave[0];

    for(int i = 0; i < ave.size(); i++){
        if(ave[i] < lowest){
            lowest = ave[i];
        }
        if(ave[i] > highest){
            highest = ave[i];
        }
    }
}


int main() {
 
    int studentsRows, scoresCols;
    cout << "Enter number of Students: ";
    cin >> studentsRows;
    cout << "Enter number scores per Students: ";
    cin >> scoresCols;



    vector table(studentsRows, vector<double>(scoresCols, 0));
    for(int i = 0; i < studentsRows; i++){
        cout << "Enter score for Student "<<i+1<<endl;
        for(int j = 0; j < scoresCols; j++){
            cout << "Enter Score "<<j+1<<": ";
            cin >> table[i][j];
        }         
    }
         
    averageCalc(table, studentsRows, scoresCols);

    return 0;
}

