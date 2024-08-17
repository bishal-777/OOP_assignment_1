//WAP to show pointer to a object
#include<iostream>
using namespace std;

class Student{
    int roll;
    double marks;
    public:
    Student(int roll,double marks){
        this->roll=roll;
        this->marks=marks;
    }
    void showdata(){
        Student s1(24,99.95);
        cout<<"Roll no:"<<this->roll<<"\nMarks:"<<this->marks<<endl;
    }
};

int main(){
    Student s1(24,99.95);
    s1.showdata();
    return 0;
}