// NAME - Pranjal Panwar
// PRN- 23070123164 
// EXPERIMENT - 12(A) 

#include<iostream> 
#include<string>
using namespace std; 
class Data {
    string name;
    int roll_no;
    char dept[50];
    char division;

    public:
    Data() {
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll Number: ";
        cin>>roll_no;
        cout<<"Department: ";
        cin>>dept;
        cout<<"Division: ";
        cin>>division;
    }
    void display() {
        cout<<"\n"<<"DETAILS:"<<"\n"<<name<<"  "<<roll_no<<"  "<<dept<<"  "<<division<<"\n";
    }
};
int main() 
{
    Data d1;
    d1.display();
} 

// Output  
// Name: Pranjal Panwar
// Roll Number: 164
// Department: E&TC
// Division: B
// 
// DETAILS:
// Pranjal  164  E&TC  B 
