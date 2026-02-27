#include <iostream>
using namespace std;



int main(){

  int n;
  cout << "Enter no. of elements: ";
  cin >> n;

  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  for(int i = 0; i < n - 1; i++){
    int lowest = i;
    for(int j = i + 1; j < n;j++){
      if (arr[j] < arr[lowest]) {
        lowest = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[lowest];
    arr[lowest] = temp;

  }

  for (int i = 0; i < n; i++) {
    cout <<arr[i];
  
  }



    return 0;
}
