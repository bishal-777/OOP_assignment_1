//What is copy constructor?WAP to show the use of copy constructor. 
//Copy constructor:This constructor initializes data members by copying data members of another object initialized by another type of constructor.
#include<iostream>
#include<string.h>
using namespace std;

class student{
    int roll;
    public:
    student(int r){
        roll=r;
    }
    void display(){
        cout<<"Roll no:"<<roll<<endl;
    }
    student(student &s){
        roll=s.roll;
    }
};

int main(){
    student s1(24);
    student s2(s1);
    s1.display();
    s2.display();
    return 0;
}
 
