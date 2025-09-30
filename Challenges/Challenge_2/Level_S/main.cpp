#include <iostream>
using namespace std;

int main()
{
   int num;

   cout << "Enter a number: ";
   cin >> num;

   while(num >= 1){
       if(num % 5 == 0){
           if(num < 1){
               cout << num;
               break;
           }
           cout <<"skipped ";

    
           
        }
        else{
            cout << num <<' ';
        }
        num--;
    

    }
    



    return 0;
}