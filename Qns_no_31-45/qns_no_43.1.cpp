//Why do we need constructor?Explain its types with program.
//1. Default Constructor:It initializes data members without taking any arguments
#include<iostream>
#include<string.h>
using namespace std;

class student{
    char name[20];
    int roll;
    public:
    student(){
        strcpy(name,"Bishal");
        roll=24;
    }
    void display(){
        cout<<"Name:"<<name<<"\tRoll no:"<<roll<<endl;
    }
};

int main(){
    student s1;
    s1.display();
    return 0;
}