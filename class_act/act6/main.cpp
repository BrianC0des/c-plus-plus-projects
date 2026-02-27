/**
 * AUTHOR: Bryan P. Saavedra
 * SECTION: BSCS 1B
 * DATE: 2026-02-24
 */

#include <iostream>
#include <vector>
using namespace std;




bool isCat(char c){
    if (c == 'C') {
        return true;
    }
    return false;
}

bool isMouse(char c){
    if (c == 'm') {
        return true;
    }
    return false;
}







int main() {
    int rows, cols, ncat, nmice, moves;
    cout << "Rows: "; 
    cin >> rows; 
    cout << "Cols: "; 
    cin >> cols; 


    vector g(rows, vector<char>(cols, '.'));

    cout << "No. Cats: "; 
    cin >> ncat;
    for (int i = 0; i < ncat; i++) {
        int pos1, pos2;
        cout << "Cat "<<i+1<<endl;
        cout << "row: "; cin >> pos1;
        cout << "col: "; cin >> pos2;
        g[pos1][pos2] = 'C';
        cout << endl;


    }
    cout << "No. Mouse: "; cin >> nmice;
    for (int i = 0; i < nmice; i++) {
        int pos1, pos2;
        cout << "Mouse "<<i+1<<endl;
        cout << "row: "; cin >> pos1;
        cout << "col: "; cin >> pos2;
        g[pos1][pos2] = 'm';
        cout <<endl;
    }

    cout << "Enter moves allowed: ";cin >> moves;
    cout << endl;

    
  if (ncat == 0 || nmice == 0 ) {
        cout << "Boring without two animals"<<endl; 
   } 


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols;j++ ) {
            cout << g[i][j]<<'\t';
        }
        cout << endl;
    }
    
    vector<vector<char>> c = g;
    
    for (int i = 0; i < rows; i++) {
        int r, co;
        for (int j = 0; j < cols; j++) {
            if (isCat(c[i][j])) {
               
            }       
        }
    }





    return 0;
}

