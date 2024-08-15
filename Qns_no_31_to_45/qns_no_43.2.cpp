//2. Paramaterized constructor:It is a type of constructor that takes argument
#include<iostream>
#include<string.h>
using namespace std;

class student{
    char name[20];
    int roll;
    public:
    student(int r){
        roll=r;
    }
    void display(){
        cout<<"Roll no:"<<roll<<endl;
    }
};

int main(){
    student s1(24);
    s1.display();
    return 0;
}
 
