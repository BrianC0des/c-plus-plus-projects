// NAME: SAAVEDRA BRYAN PAYAO
// SET: B
// TO OPEN THE TERMINAL PRESS ( CTRL + J )
// TO RUN THE CODE COPY AND PASTE THIS COMMAND TO THE TERMINAL ( g++ main.c++ -o main.exe && ./main.exe )

#include <iostream>
using namespace std;

int main(){
    int numofInputs, num, itr = 0, highestEven = 0, lowestOdd = 0;
    bool foundEven = false;
    bool foundOdd = false;

    cout << "How many number of Input: ";
    cin >> numofInputs;

    while(itr < numofInputs){
        cout << "Enter" << " number " <<itr + 1 <<": ";
        cin >> num;
        if(num % 2 == 0){
            if(!foundEven || num > highestEven){
                highestEven = num;
                foundEven = true;
            }

        }
        else{
            if(!foundOdd || num < lowestOdd){
                lowestOdd = num;
                foundOdd = true;
            }
        }
        itr++;
        


    }
    cout <<"\n";
    cout << "HIGHEST EVEN = "<< highestEven <<endl;
    cout << "LOWEST ODD  = "<< lowestOdd <<endl;









}