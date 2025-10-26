#include<iostream>

using namespace std;
int main(){
	char choice;
	do{
		string num;
		int num0 = 0,num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0;

		cout << "Enter a number: ";
		cin >> num;

		for(int i = 0; i < num.size(); i++){
			if(num[i] == '0') num0++;
			if(num[i] == '1') num1++;
			if(num[i] == '2') num2++;
			if(num[i] == '3') num3++;
			if(num[i] == '4') num4++;
			if(num[i] == '5') num5++;
			if(num[i] == '6') num6++;
			if(num[i] == '7') num7++;
			if(num[i] == '8') num8++;
			if(num[i] == '9') num9++;	
		}

		cout << "0: "<<num0<<endl;
		cout << "1: "<<num1<<endl;
		cout << "2: "<<num2<<endl;
		cout << "3: "<<num3<<endl;
		cout << "4: "<<num4<<endl;
		cout << "5: "<<num5<<endl;
		cout << "6: "<<num6<<endl;
		cout << "7: "<<num7<<endl;
		cout << "8: "<<num8<<endl;
		cout << "9: "<<num9<<endl;




		cout << "Try another? [Y/n]: ";
		cin >> choice;


	}while(choice == 'Y' || choice == 'y');
	return 0;
}
