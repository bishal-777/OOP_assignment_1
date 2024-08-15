//Create a class time with data member second ,minute and hour . Use necessary member function to add two time. 
#include <iostream> 
#include<iostream>
using namespace std;

class Time{
    int hr,min,sec;
    public:
    void getdata();
    void add(Time);
    void display();

};

void Time::getdata(){
    cout<<"Enter time in hr:min:sec"<<'\n';
    cin>>hr>>min>>sec;
}
void Time::add(Time t){
    sec=(hr+t.hr)*60*60+(min+t.min)*60+(sec+t.sec);
    hr=sec/(60*60);
    min=(sec-(hr*60*60))/60;
    sec=sec-hr*60*60-min*60;
}
void Time::display(){
    cout<<"Added time:\t"<<hr<<"hr "<<min<<"min "<<sec<<"sec";
}

int main(){
    Time t1,t2;
    t1.getdata();
    t2.getdata();
    t1.add(t2);
    t1.display();
    return 0;
}