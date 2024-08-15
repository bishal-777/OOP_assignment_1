/*Create a class student with data member name,id,faculty. 
Use necessary member function and wap to scan and display the details of 5 students. */
#include<iostream>
using namespace std;

class student{
    char name[20],id[20],faculty[20];
    public:
    void getdata();
    void showdata();
};

void student::getdata(){
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter id :";
        cin>>id;
        cout<<"Enter faculty :";
        cin>>faculty;
}

void student::showdata(){
    cout<<"Name:\t"<<name<<'\n'<<"Id:\t"<<id<<'\n'<<"faculty:\t"<<faculty<<'\n';
}

int main(){
    student s[5];
    for(int i=0;i<5;i++){
        s[i].getdata();
    }
    for(int i=0;i<5;i++){
        s[i].showdata();
    }
    return 0;
}

