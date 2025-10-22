#include <iostream>
using namespace std;


int main(){

    char choice;
    
    
    do{
        long long num;
        int num0 = 0,num1 = 0,num2 = 0,num3 = 0,num4 = 0,num5 = 0,num6 = 0,num7 = 0,num8 = 0,num9 = 0;
        int digit;
        cout << "Digit Frequency Counter"<<endl;
        cout << "Enter a number: ";
        cin >> num;
        
        while(num > 0){
            digit = num%10;
            
            if(digit == 0){
                num0++;
            }
            else if(digit == 1){
                num1++;
            }
            else if(digit == 2){
                num2++;
            }
            else if(digit == 3){
                num3++;
            }
            else if(digit == 4){
                num4++;
            }
            else if(digit == 5){
                num5++;
            }
            else if(digit == 6){
                num6++;
            }
            else if(digit == 7){
                num7++;
            }
            else if(digit == 8){
                num8++;
            }
            else if(digit == 9){
                num9++;
            }
         
            num/=10;

        
        }

        cout << "Digit 0: "<<num0<<" Times"<<endl;
        cout << "Digit 1: "<<num1<<" Times"<<endl;
        cout << "Digit 2: "<<num2<<" Times"<<endl;
        cout << "Digit 3: "<<num3<<" Times"<<endl;
        cout << "Digit 4: "<<num4<<" Times"<<endl;
        cout << "Digit 5: "<<num5<<" Times"<<endl;
        cout << "Digit 6: "<<num6<<" Times"<<endl;
        cout << "Digit 7: "<<num7<<" Times"<<endl;
        cout << "Digit 8: "<<num8<<" Times"<<endl;
        cout << "Digit 9: "<<num9<<" Times"<<endl;







        cout << "Do you want to continue? [Y/n]: ";
        cin >> choice;


        
    }while(choice == 'y' || choice == 'Y');











    return 0;
}



