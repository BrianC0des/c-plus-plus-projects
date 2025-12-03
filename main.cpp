#include <iostream>
using namespace std;

char grader(int score) {
  if (score >= 90)
    return 'A';
  else if (score >= 80)
    return 'B';
  else if (score >= 70)
    return 'C';
  else if (score >= 60)
    return 'D';
  else
    return 'F';
}

int main() {
  int score;
  cout << "Enter numeric score: ";
  cin >> score;

  char grade = grader(score);
  cout << "The letter grade is: " << grade << endl;

  return 0;
}
