/**
 * Author: Bryan P. Saavedra
 * Section: BSCS 1B
 * Created: YYYY-MM-DD
 */

#include <bits/stdc++.h>
using namespace std;













int main() {
       int aRows, aCols;
       int bRows, bCols;
       char op;
       cout << "[A] Rows: ";
       cin >> aRows;
       cout << "[A] Columns: ";
       cin >> aCols;
       cout << "[B] Rows: ";
       cin >> bRows;
       cout << "[B] Columns: ";
       cin >> bCols;

       vector<vector<int>> matrixA(aRows, vector<int>(aCols, 0));
       vector<vector<int>> matrixB(bRows, vector<int>(bCols, 0)); 
     
      cout << "Enter elements for Matrix A"<<endl;
      for(int i = 0; i < aRows; i++){
            cout << "ROW: "<<i+1<<endl;
            for(int j = 0; j < aCols; j++){ 
                  cin>>matrixA[i][j];
            }
            cout << "================"<<endl;
            
      }
      cout << endl;
      cout << "Enter elements for Matrix B"<<endl;
      for(int i = 0; i < bRows; i++){
            cout << "ROW: "<<i+1<<endl;
            for(int j = 0; j < bCols; j++){ 
                  cin>>matrixB[i][j];
            }
            cout << "================"<<endl;
            
      }
  

      cout << " ==== A ==== " <<endl;
      for(int i = 0; i < aRows; i++){
            cout <<"[";
            for(int j = 0; j < aCols; j++){
                    cout<<matrixA[i][j]<<" ";
            }
            cout <<"]"<<endl;
      
      cout << " ==== B ==== " <<endl;
      for(int i = 0; i < bRows; i++){
            cout <<"[";
            for(int j = 0; j < bCols; j++){
                    cout<<matrixB[i][j]<<" ";
            }
            cout <<"]"<<endl;
      }
      
      char choice;       
      cout << "Enter Operation[+][-][*][/]: ";
      cin >> choice;
      switch (choice) {
      case '+':
          addMatrix(matrixA, matrixB);
          break;
      case '-':
          subMatrix(matrixA, matrixB);
          break;
      case '*':
          break;
      }   
   

       return 0;

}

