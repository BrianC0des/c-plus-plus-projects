#include <iostream>
using namespace std;




double quizzes(int num_quizzes){
    double score, total_scores = 0;
    for(int i = 1; i <= num_quizzes; i++){
        cout << "Enter Subject #"<< i <<": ";
        cin >> score;
        total_scores = total_scores + score;
        
    }
    return total_scores;
      
}

auto average_calc()
{
    int num_quizzes, num_of_students;
    int student_count = 1;
    
    cout << "How many students? : ";
    cin >> num_of_students;
    cout << "How many subjects? : ";
    cin >> num_quizzes;
    while (student_count <= num_of_students)
    {
        cout << "Student #" << student_count <<endl;
        double total = quizzes(num_quizzes);
        cout <<"\n";
        
        double average_score = total / num_quizzes;
        cout << "AVERAGE: " << average_score << endl;
        
        if (average_score >= 95)
        {
            cout << "REMARKS: EXCELLENT" << endl;
        }
        else if (average_score >= 90)
        {
            cout << "REMARKS: VERY GOOD" << endl;
        }
        else if (average_score >= 81)
        {
            cout << "REMARKS: GOOD" << endl;
        }
        else if (average_score >= 80)
        {
            cout << "REMARKS: AVERAGE" << endl;
        }
        else if (average_score >= 75)
        {
            cout << "REMARKS: PASSES" << endl;
        }
        else
        {
            cout << "REMARKS: FAILED" << endl;
        }
        cout <<"-------------------------------"<<"\n";
        
        student_count++;
        
    
    }

}


int main()
{
    string choice;
    average_calc();

    do{
        cout << "Do you want to calculate again?: ";
        cin >> choice;
        if (choice == "yes" || choice == "y"){
            average_calc();
        }
        else{
            cout << "Program Ended" << endl;
            break;
        }

    }while(choice == "yes" || choice == "y");



    return 0;
}
