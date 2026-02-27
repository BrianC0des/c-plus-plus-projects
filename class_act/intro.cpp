#include <iostream>
#include <string>
using namespace std;
int main()
{

  string wordd;
    cout<<"enter a word to check if its a palindrome"<<endl;
    getline(cin,wordd);

    int Length=wordd.length();

     string drow, Word ;

         for(int i=1; i<=Length; i++){
             drow=wordd[Length-i];
             Word+=drow;
            }
    cout<<Word<<endl;
    if(Word==wordd){
    cout<<"this is a palindrome"<<endl;
}
else{
    cout<<"not a palindrome"<<endl;
}




    return 0;
}