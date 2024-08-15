//WAP to find TSA, CSA and volume of cylinder using concept of class and object. 
#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;

class cylinder{
    int r;
    int h;
    public:
    void getdata(){
        cout<<"Enter radius and height of cylinder:\t"<<'\n';
        cin>>r>>h;
    }
    void tsa(){
        int a;
        a=2*pi*r*h;
        cout<<"Total surface area:"<<a<<'\n';
    }

    void csa(){
        int a;
        a=2*pi*r*(r+h);
        cout<<"Circular surface area:"<<a<<'\n';
    }

    void volume(){
        int v;
        v=pi*pow(r,2)*h;
        cout<<"Volume:"<<v;
    }
};

int main(){
    cylinder c1;
    c1.getdata();
    c1.tsa();
    c1.csa();
    c1.volume();
    return 0;
}