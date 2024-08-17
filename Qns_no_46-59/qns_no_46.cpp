//What is constructor overloading? Give with example. 
//Constructor overloading is a method where we initialize more than one constructor in a program.The example of it is given below:
#include<iostream>
using namespace std;

class student{
    int roll;
    float marks;
    public:
    student(){
        roll=01;
        marks=40;
    }
    student(int r,float m){
        roll=r;
        marks=m;
    }

    void display();
};

void student::display(){
    cout<<"Roll no:\t"<<roll<<'\n'<<"Marks:\t"<<marks<<endl;
}

int main(){
    student s1,s2(24,96.99);
    s1.display();
    s2.display();
    return 0;
}
