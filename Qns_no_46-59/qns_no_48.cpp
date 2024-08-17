/*Create a class name complex with data members real and imaginary.I
initialize all the data member using constructor and use necessary member function to add two complex numbers.*/
#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;
    public:
    complex(int r,int i){
        real=r;
        imaginary=i;
    }

    void add(complex c){
        real+=c.real;
        imaginary+=c.imaginary;
    }
    void display(){
        cout<<"Added complex number=\t"<<real<<"+i"<<imaginary<<endl;
    }
};

int main(){
    complex c1(5,4),c2(2,7);
    c1.add(c2);
    c1.display();
    return 0;
}