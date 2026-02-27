/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: 2026-01-26
 */

#include <iostream>
using namespace std;




int main() {
    int n, num, odd = 0, even = 0;
    
    cout << "Enter number of elements: ";
    cin >> n;


    int numarr[n];

    cout << "Enter " << n << " elements: \n"; 
    
    for(int i = 0; i < n; i++){
        cin >> numarr[i];
        if(numarr[i] % 2 == 0){
            even++;    
        }
        else{
            odd++;
        }
    }

    double sum = 0;

    for(int j = 0; j < n; j++){
      sum+=numarr[j];

    }
    
    cout << "Sum of all elements: "<<sum<<endl;  
    double ave = sum/n;
    cout << "Average of elements: "<<ave<<endl;
    



    int largest, smallest;
  
     for(int i = 0; i < n; i++) {
        largest = numarr[0];
        if(numarr[i] > largest) {
            largest = numarr[i];
        }
     }
    
      for(int j = 0; j < n; j++) {
        smallest = numarr[0];
        if(numarr[j] < smallest) {
            smallest = numarr[j];
        }
        
     }
    


    cout << "Largest number: "<<largest<<endl;
    cout << "Smallest number: "<<smallest<<endl;
    cout << "Count of even numbers: "<<even<<endl;
    cout << "Count of odd numbers: "<<odd<<endl;
    cout << "Reversed Array: ";
 
    for(int a = n-1; a >= 0; a--){
      cout <<numarr[a]<<" ";
  }
    
   

    return 0;
}

