#include "averageCalc.h"
#include <iostream>
using namespace std;

void finalGrade(double _generalAverage) {
  if (_generalAverage >= 90) {
    cout << "Your General Average is 1.0";
  } else if (_generalAverage >= 85) {
    cout << "Your General Average is 1.25";
  } else if (_generalAverage >= 80) {
    cout << "Your General Average is 1.5";
  } else if (_generalAverage >= 75) {
    cout << "Your General Average is 1.75";
  } else if (_generalAverage >= 70) {
    cout << "Your General Average is 2.0";
  } else if (_generalAverage >= 65) {
    cout << "Your General Average is 2.25";
  } else if (_generalAverage >= 60) {
    cout << "Your General Average is 2.5";
  } else if (_generalAverage >= 55) {
    cout << "Your General Average is 2.75";
  } else if (_generalAverage >= 50) {
    cout << "Your General Average is 3.0";
  } else {
    cout << "Your General Average is 5.0";
  }
}

int main() {
  double quiz1, quiz2, quiz3, midtermExam, finalExam, generalAverage;
  string studentName;

  cout << "Enter Student Name: ";
  getline(cin, studentName);

  while (true) {
    cout << "Enter Quiz 1: ";
    cin >> quiz1;
    if (quiz1 < 0) {
      system("clear");
      cout << "Score cannot be less 0!" << endl;
    } else if (quiz1 > 100) {
      system("clear");
      cout << "Score cannot be greater than 100!" << endl;
    } else {
      break;
    }
  }
  while (true) {
    cout << "Enter Quiz 2: ";
    cin >> quiz2;
    if (quiz2 < 0) {
      system("clear");
      cout << "Score cannot be less 0!" << endl;
    } else if (quiz2 > 100) {
      system("clear");
      cout << "Score cannot be greater than 100!" << endl;
    } else {
      break;
    }
  }

  while (true) {
    cout << "Enter Quiz 3: ";
    cin >> quiz3;
    if (quiz3 < 0) {
      system("clear");
      cout << "Score cannot be less 0!" << endl;
    } else if (quiz3 > 100) {
      system("clear");
      cout << "Score cannot be greater than 100!" << endl;
    } else {
      break;
    }
  }
  while (true) {
    cout << "Enter Midterm Exam Score: ";
    cin >> midtermExam;
    if (midtermExam < 0) {
      system("clear");
      cout << "Score cannot be less 0!" << endl;
    } else if (midtermExam > 100) {
      system("clear");
      cout << "Score cannot be greater than 100!" << endl;
    } else {
      break;
    }
  }
  while (true) {
    cout << "Enter Final Exam Score: ";
    cin >> finalExam;
    if (finalExam < 0) {
      system("clear");
      cout << "Score cannot be less 0!" << endl;
    } else if (finalExam > 100) {
      system("clear");
      cout << "Score cannot be greater than 100!" << endl;
    } else {
      break;
    }
  }

  generalAverage =
      getGeneralAverage(quiz1, quiz2, quiz3, midtermExam, finalExam);
  system("clear");

  cout << "|    Quiz 1    |    Quiz 2    |    Quiz 3    |    Midterm    |   "
          "Final Term   |"
       << endl;
  cout << "|      " << quiz1 << "      |      " << quiz2 << "      |      "
       << quiz3 << "      |       " << midtermExam << "      |      "
       << finalExam << "        |" << endl;

  finalGrade(generalAverage);
  return 0;
}
