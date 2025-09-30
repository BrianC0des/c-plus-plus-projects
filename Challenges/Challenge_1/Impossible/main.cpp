#include <iostream>
using namespace std;





int even_num(int num){
    return num / 2;
}

int odd_num(int num){
    return num * 3 + 1;

}

int algo(){

    int num;
    int steps = 1;
    do{
        cout << "Enter a number: ";
        cin >> num;
        
        if(num != 0){
            while(num != 1){
                cout << num << " -> ";
                if(num % 2 == 0){
                    num = even_num(num);
                    if(num == 1){
                        cout << num;
                        break;
                    }
    
                }
                else{
                    num = odd_num(num);
                    
                    if(num == 1){
                        cout << num;
                        break;
                    }
    
                }
                steps++;
            }
            cout <<'\n';
            cout << "Total Steps: "<<steps <<endl;
            break;
            
        }
        else{
            cout << "Inavlid input number must be greater than 0 "<<endl;
        }
        
        
    }while(true);
    return 0;
}



int main() {
    char choice;
    do{
        cout <<'\n';
        algo();
        cout << "Do you want to try again?: [Y/N]: ";
        cin >> choice;
    }while( choice != 'n' && choice != 'N');
    cout << "Program Ended";
    
    return 0;
}