#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define vvi vector<vector<int>>
#define sz(a) a.size()




void outputMatrices(vvi matrixA, vvi matrixB ,int &aRows,int &aCols,int &bRows,int &bCols){
    cout << " ==== A ==== " <<endl;
    for(int i = 0; i < aRows; i++){
        cout <<"[";
        for(int j = 0; j < aCols; j++){
            cout<<matrixA[i][j]<<" ";
        }
            cout <<"]"<<endl;
    }
    cout << " ==== B ==== " <<endl;
    for(int i = 0; i < bRows; i++){
        cout <<"[";
        for(int j = 0; j < bCols; j++){
            cout<<matrixB[i][j]<<" ";            
        }
        cout <<"]"<<endl;
     }

}







int getValidInput(string str){
    int num;
    cout<<str;
    while (!(cin>>num)) {
        cout << "Invalid Input!"<<endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return num;
}


void PromptAS(int &aRows,int &aCols,int &bRows,int &bCols){

    do{
        aRows = getValidInput("[A] Rows: ");
        aCols = getValidInput("[A] Columns: ");
        bRows = getValidInput("[B] Rows: ");
        bCols = getValidInput("[B] Columns: ");

        if (aRows != bRows && aCols != bCols) {
            cout << "A Matrix must be equal to B Matrix"<<endl;
        }

    }while(aRows != bRows && aCols != bCols);

}



void PromptM(int &aRows,int &aCols,int &bRows,int &bCols){

    do{
        aRows = getValidInput("[A] Rows: ");
        aCols = getValidInput("[A] Columns: ");
        bRows = getValidInput("[B] Rows: ");
        bCols = getValidInput("[B] Columns: ");

        if (aCols != bRows) {
            cout << "Column of Matrix A must be equal to Rows of Matrix B" <<endl;
        }
    }while(aCols != bRows);

}



void addMatrix(vvi a, vvi b){
    vvi c(sz(a));
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a[i].size();j++){
            int n = a[i][j] + b[i][j];
            c[i].push_back(n);
        }
    }

    cout << " ==== C ==== " <<endl;
    for(int i = 0; i < c.size(); i++){
        cout <<"[";
        for(int j = 0; j < c[i].size(); j++){
            cout<<c[i][j]<<" ";
        }    cout <<"]"<<endl;  
    }
}


void subMatrix(vvi a, vvi b){
    vvi c(sz(a));
    for(int i = 0; i < c.size(); i++){
        for(int j = 0; j < a[i].size();j++){
            int n = a[i][j] - b[i][j];
            c[i].push_back(n);
        }
    }
    cout << " ==== C ==== " <<endl;
    for(int i = 0; i < c.size(); i++){
        cout <<"[";
        for(int j = 0; j < c[i].size(); j++){
            cout<<c[i][j]<<" ";
        }
        cout <<"]"<<endl;
    }
}


void multiMatrix(vvi a, vvi b){
    vvi c(sz(a));
    int len = sz(a);
    for(int i = 0; i < len; i++){
        for(int j = 0; j < a[i].size(); j++){

        }    
    }

}




/*FIX: terminate called after throwing an instance of 'std::length_error'
        what():  cannot create std::vector larger than max_size()
        [1]    137134 IOT instruction (core dumped)  ./main.exe
*/



int main() {
    int aRows, aCols;
    int bRows, bCols;
    char op;
   //FIX:  
    vector matrixA(aRows, vector<int>(aCols, 0));
    vector matrixB(bRows, vector<int>(bCols, 0)); 


    cout << "Enter the Matrix Operation"<<endl;
    cout << "[1] Addition"<<endl;
    cout << "[2] Subtraction"<<endl;
    cout << "[3] Multiplication"<<endl;
    op = getValidInput("Enter Your Selection: ");



    switch (op) {
        case 1:
            PromptAS(aRows, aCols,bRows,bCols);
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
            outputMatrices( matrixA, matrixB, aRows, aCols, bRows, bCols);
            addMatrix(matrixA, matrixB);

            break;
        case 2: 
            PromptAS(aRows, aCols, bRows, bCols);
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

            outputMatrices( matrixA, matrixB, aRows, aCols, bRows, bCols);
            subMatrix(matrixA, matrixB) ;
            break;
        case 3:
            PromptM(aRows, aCols, bRows, bCols);
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
            for(int i = 0; i < bCols; i++){
                cout << "ROW: "<<i+1<<endl;
                for(int j = 0; j < bRows; j++){ 
                    cin>>matrixB[j][i];

                }
                cout << "================"<<endl;

            }
            outputMatrices( matrixA, matrixB, aRows, aCols, bRows, bCols);
            multiMatrix(matrixA, matrixB);
            break;
        default:
            cout<<"Invalid Input!";
    }  

        return 0;
}


