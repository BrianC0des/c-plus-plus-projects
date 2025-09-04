#include <iostream>
using namespace std;

int main()
{
    double quiz1, quiz2, quiz3;
    int num_of_students;
    double total_scores;
    int count = 1;
    cout << "How many students? : ";
    cin >> num_of_students;
    while (count <= num_of_students)
    {
        cout << "Student #" << count << endl;
        cout << "Quiz 1: ";
        cin >> quiz1;
        cout << "Quiz 2: ";
        cin >> quiz2;
        cout << "Quiz 3: ";
        cin >> quiz3;
        total_scores = quiz1 + quiz2 + quiz3;
        double average_score = total_scores / 3;
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

        count++;
    }

    return 0;
}
