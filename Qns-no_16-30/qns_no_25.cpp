/*Create  Class called student with data member name,id and faculty.
Use the necessary member function to read the data member from the user and display the details. */
#include<iostream>

using namespace std;

class student{
    char name[20];
    char id[20];
    char faculty[20];

    public:
    void read_data();
    void display_data();
};

void student::read_data(){
    cout<<"Enter name:\t"<<endl;
    cin>>name;
    cout<<"Enter id:\t"<<endl;
    cin>>id;
    cout<<"Enter faculty:\t"<<endl;
    cin>>faculty;
}

void student::display_data(){
    cout<<"Name:\t"<<name<<'\n'<<"Id:\t"<<id<<'\n'<<"Faculty:\t"<<faculty<<'\n';
}

int main()
{
    student s;
    s.read_data();
    s.display_data();
    return 0;
}