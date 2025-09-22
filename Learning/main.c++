#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<string> fruits = {"Banana","Apple","Strawberry","Kiwi","Pineapple"};
    fruits.push_back("Blueberry");    
    int len = fruits.size();
    for(int i = 0; i < len; i++){
        cout << "Index:"<< i << fruits[i] <<endl;

        
    }



    return 0;
}