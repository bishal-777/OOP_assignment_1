/*WAP designing a class called Midpoint to find mid-point between 
two points by returning object from member function using this pointer. */
#include<iostream>
using namespace std;

class Midpoint{
    int point,midpoint;
    public:
    Midpoint(int p){
        point=p;
    }
    Midpoint(){
        point=0;
    }
    Midpoint calacMidpoint(Midpoint m){
        Midpoint m_final;
        m_final.midpoint=(point+m.point)/2;
        return m_final;
    }
    void display(){
        cout<<"Midpoint="<<midpoint<<endl;
}   
};

int main(){
    Midpoint m1(5),m2(7),m3;
    m3=m2.calacMidpoint(m1);
    m3.display();
    return 0;
}