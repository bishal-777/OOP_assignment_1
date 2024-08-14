//This program claculates pressure difference(took reference from class 12 bernauli theorem qns)
#include<iostream>
using namespace std;

class second;

class first{
    int p1;
    public:
    void getdata(){
        cout<<"Enter a pressure in outside the roof:";
        cin>>p1;
    }
    friend class second;
};

class second{
    int p2;
    public:
    void getdata(){
        cout<<"Enter the pressure in inside the roof:"<<'\n';
        cin>>p2;
    }
    void greater(first a){
        int del_p=a.p1-p2;
        if(del_p>0){
            cout<<"Pressure difference is positive so roof wont fly"<<endl;
        }
        else{
            cout<<"Pressure difference is negative so roof will fly"<<endl;
        }
        
    }
};

int main(){
    first a;
    second b;
    a.getdata();
    b.getdata();
    b.greater(a);
    return 0;
}
