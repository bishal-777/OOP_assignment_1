#include<iostream>
using namespace std;

class student{
    char name,roll;
    public:
    student(char n,char r){
        name=n;
        roll=r;
    }

    student(student s){
        name=s.name;
        roll=s.roll;
    }
    void display();
};

void student::display(){
    cout<<"Name:\t"name<<"Roll no:\t"<<roll<<endl;
}

int main(){
    student s1('bishal','ACE080BCT024');
    student s2.(s1);
    s1.display();
    s2.display();
    return 0;
}