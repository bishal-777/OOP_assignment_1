//Write a program showing member function definition:(a)inside class
#include<iostream>
using namespace std;
class Student{
    int roll;
    public:
    void getdata(){
        cout<<"Enter your roll no:"<<endl;
        cin>>roll;
    }
    void showdata(){
        cout<<"Roll no:"<<roll<<endl;
    }
};

int main(){
    Student s1;
    s1.getdata();
    s1.showdata();
    return 0;
}