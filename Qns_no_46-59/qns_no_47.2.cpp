//Using destructor for program of qns no 46
#include<iostream>
using namespace std;

class student{
    int roll;
    float marks;
    public:
    student(int r,float m){
        roll=r;
        marks=m;
    }
    ~student(){
        cout<<"Sucessfully deallocated memory!";
    }
    void display();
};

void student::display(){
    cout<<"Roll no:\t"<<roll<<'\n'<<"Marks:\t"<<marks<<endl;
}

int main(){
    student s1(24,96.99);
    s1.display();
    return 0;
}
