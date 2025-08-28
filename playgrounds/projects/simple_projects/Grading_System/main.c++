#include <iostream>
using namespace std;

float grader(float first, float final);

int main(){
    int firstGrade;
    int finalGrade;

    cout << "*************************" << endl;
    cout << "     Grading System    " << endl;
    cout << "*************************" << endl;
    cout << "Enter Grade for First Semester: "; 
    cin >> firstGrade;
    cout << "Enter Grade for Final Semester: "; 
    cin >> finalGrade;
    
    float totalGrade = grader(firstGrade, finalGrade);
    if(totalGrade == 1.00){
        cout << "Excellent" << endl;
    }
         
    else if(totalGrade <= 1.50){
        cout << "Very Good" << endl;
    }
    
    else if(totalGrade <= 2.00){
        cout << "Good" << endl;
    }
         
    else if(totalGrade <= 2.50){
        cout << "Satisfactory" << endl;
    }
         
    else if(totalGrade <= 3.00){
        cout << "Passing" << endl;
    }
         
    else {
        cout << "Failed" << endl;
    }
         
   

    return 0;
}

float grader(float first, float final){
    return (first + final) / 2;
}




