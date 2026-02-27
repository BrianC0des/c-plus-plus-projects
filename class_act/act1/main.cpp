/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: 2026-01-28
 */

#include <iostream>
using namespace std;


void fibonacci(int n1, int n2, int n){
  

  int a = n1, b = n2, c, temp = 0; 
  cout << a <<" "<< b << " " << a + b << " ";
  for(long long i = 0; i <= n; i++){
    c = a + b;
    a = b;
    b = c;
    temp = a;
    temp = temp + b;
    cout << temp << " ";
  }
  
}



int main() {
  char choice;
  do{
    long long numofSeq, num, num2;
    
    cout << "Enter N: ";
    cin >> num;

    
    cout << "Enter N2: ";
    cin >> num2; 


    cout << "Enter number of Sequence: ";
    cin >> numofSeq;
    

    fibonacci(num,num2,numofSeq);


    cout << "\nDo you want to repeat? [y/Y]: ";
    cin >> choice;

  }while(tolower(choice) == 'y');


    return 0;
}


