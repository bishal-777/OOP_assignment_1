//Containership is the concept in  OOP in which a class has object of another class
#include<iostream>
using namespace std;

class Triangle{
    int b,h;
    public:
    int area;
    Triangle(int x,int y){
        b=x;
        h=y;
    }
    void areacalc(){
        area=(b*h)/2;
        cout<<"Area of triangle="<<area<<endl;
    }
};

class Square{
    int l;
    Triangle t;
    public:
    int area;
    Square(int x){
        l=x;
    }
    void areacalc(){
        area=l*l;
        cout<<"Area of square="<<area<<endl;
    }
    void cmp(){
        if(t.area>area){
            cout<<"traiangle has larger area"<<endl;
        }
        else{
            cout<<"square has larger area"<<endl;
        }
    }
};

int main(){
    Triangle t1(5,7);
    Square s1(5);
    t1.areacalc();
    s1.areacalc();
    s1.cmp();
    return 0;
}