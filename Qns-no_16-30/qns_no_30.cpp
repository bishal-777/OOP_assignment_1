//Create a class distance with data member feet and inch. Use necessary member function to add two distance and display result.(1ft=12inch) 
#include <iostream> 
#include<iostream>
using namespace std;

class dist{
    int feet,inch,a;
    public:
    void getdata(){
        cout<<"Enter distance in feet and inches";
        cin>>feet>>inch;
    }
    void add(dist d1,dist d2){
        int a;
        a=(d1.feet+d2.feet)*12+(d1.inch+d2.inch);
        feet=a/12;
        inch=a%12;
        
    }
    void display(){
        cout<<"Added distance= "<<feet<<"ft and "<<inch<<"inches"<<endl;
    }
};
int main(){
    dist d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3.add(d1,d2);
    d3.display();
    return 0;
}