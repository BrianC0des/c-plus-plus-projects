/**
 * AUTHOR: Bryan P. Saavedra
 * SECTION: BSCS 1B
 * DATE: 2026-02-27
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const int num = 25;  
    int countNum = 0;
    vector<vector<int>> grid = {
        {4, 16,4, 10, 7, 10},
        {1, 2, 3, 6, 3, 5},
        {14, 8, 2, 0, 4, 12 },
        {1, 6, 11, 20, 1, 8},
        {2, 4, 4, 3, 1 , 0}
    };
    vector grid2(2, vector<int>(2,0)); 

    for (int i = 0; i < grid.size(); i++) {
        cout << "+------------------------------------------------------------------------------------------------+"<<endl;
        for (int j = 0; j < grid[i].size(); j++) {
            cout << "|\t"<<grid[i][j]<<"\t";
        }
        cout<<" |";
        cout << endl;
    }
    cout << "+------------------------------------------------------------------------------------------------+"<<endl;




    cout<<endl;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (i < grid.size() - 1 && j < grid[i].size() - 1) {
                int topl = grid[i][j];
                int topr = grid[i][j+1]; 
                int botl = grid[i+1][j];
                int botr = grid[i+1][j+1];
                int sum = 0;
                sum = (topl + topr + botl  + botr);
                if (sum == num) {
                    countNum++;
                    cout <<"+-------------------------------+"<<endl;
                    cout <<"|\t"<<topl<<"\t|\t"<<topr<<"\t|"<<endl;
                    cout <<"+-------------------------------+"<<endl;
                    cout <<"|\t"<<botl<<"\t|\t"<<botr<<"\t|"<<endl;
                    cout <<"+-------------------------------+"<<endl;
                    cout<<endl;
                }

            }
        }

    }

    cout << countNum;









    return 0;
}

