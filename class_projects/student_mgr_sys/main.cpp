#include <fstream>
#include <iostream>
using namespace std;
void newStudents(string name);
void viewStudent();
char menu();


double getMarks();



int main(){
    char repeat;
    string name;
    float marks;

    do{

        switch (menu())
        {
            case '1':
                char again;
                do{    
                    cin.ignore();
                    cout << "Enter a name: ";
                    getline(cin, name); 
                    newStudents(name);
                    cout << "Enter new student? [y/n]: ";
                    cin >> again;
                }while(again == 'y' || again == 'Y');
                
                break;
            case '2':
                system("clear");
                cout << "================Students================="<<endl;
                viewStudent(); 
        
                break;
            default:
                break;
            
        }

        cout << "\n[1] Menu\n[2] Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> repeat;
        
        
    }while(repeat == '1' || repeat == '1');
    cout << "Program Ended!\n";
    
    return 0;
}



void newStudents(string name)
{
  double marks, numOfMarks;
  fstream studentFile("Studentlog.txt", ios::in | ios::app);


  if(!studentFile){
      cout << "Error opening file!";
  }
   
  studentFile << "Name : "<<name<<endl; 
  cout << "How many marks: ";
  cin >> numOfMarks;
  for(int i = 1; i <= numOfMarks; i++){
      cout << "Enter Mark "<<i<<": ";
      cin >> marks;
      studentFile << "Mark "<<i<<" : "<<marks<<endl;
  }

  
  studentFile <<endl<<endl;
  
  studentFile.close();
  cout << "Added Successfully!"<<endl;

}



void viewStudent()
{
    ifstream studentFile("Studentlog.txt");
    
    if(studentFile){
        string line;
        while(getline(studentFile, line)){
            cout << line <<endl;
        }
        studentFile.close();   

    }
}



char menu(){
    char choice;
    system("clear");
    cout << "========= Menu ==========" <<endl;
    cout << "[1] Add Student" <<endl;
    cout << "[2] View Students" <<endl;
    cout << "[3] clear" <<endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;

}



