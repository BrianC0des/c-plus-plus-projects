#include <iostream>
using namespace std;

int main() {

  int n;

  cout << "Enter the number of subjects: ";
  cin >> n;

  int grade[n];


  for(int i = 0; i < n; i++){
    cout << "Enter Grade: ";
    cin >> grade[i];
  }
  
  for(int i = 0; i < n; i++){
    cout <<grade[i]<<" ";
  }
  
  return 0;
}
