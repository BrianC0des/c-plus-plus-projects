// NAME: SAAVEDRA BRYAN PAYAO
// SET: B
// TO OPEN THE TERMINAL PRESS ( CTRL + J )
/* 
TO RUN THE CODE COPY AND PASTE THE COMMAND BELOW INTO THE TERMINAL AND PRESS ENTER 
( g++ main.c++ -o main.exe && ./main.exe )
*/

#include <iostream>
using namespace std;

int main(){
    int numofInputs, num;
    int itr = 0, highestEven = 0, lowestOdd = 0;
    bool foundEven = false;
    bool foundOdd = false;

    cout << "HOW MANY NUMBERS OF INPUT: ";
    cin >> numofInputs;

    while(itr < numofInputs){

        cout << "Enter" << " number #" <<itr + 1 <<": ";
        cin >> num;
        
        if(num % 2 == 0)
        {
            if(!foundEven || num > highestEven)
            {
                highestEven = num;
                foundEven = true;
            }

        }
        else
        {
            if(!foundOdd || num < lowestOdd)
            {
                lowestOdd = num;
                foundOdd = true;
            }
        }
        itr++;
        
    }
    cout <<"\n";

    if(highestEven == 0){
        cout << "NO EVEN NUMBERS FOUND"<<endl;
    }
    else{
      cout << "HIGHEST EVEN = "<< highestEven <<endl;
    }
    if(lowestOdd == 0){
        cout << "NO ODD NUMBERS FOUND"<<endl;
    }
    else{
        cout << "LOWEST ODD  = "<< lowestOdd <<endl;
    }
    

    return 0;

}