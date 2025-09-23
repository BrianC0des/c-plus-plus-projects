#include <iostream>
using namespace std;

int main()
{
    int nums[5];
    int max = nums[0];
    int min = nums[0];
    for(int i = 1; i < 5; i++){
        cout << "Enter a number: ";
        cin >> nums[i];
    }
 
    return 0;
}