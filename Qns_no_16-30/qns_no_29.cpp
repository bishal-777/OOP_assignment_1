//How can you pass object as an argument ? WAP to add two complex numbers passing object as an argument.
//Object can be passed as an argument as by simply passing it into the function like we pass variables.
#include<iostream>
using namespace std;

class complex{
    int real,imag;
    public:
    void getdata(){
        cout<<"Enter real and imaginary part:\t"<<endl;
        cin>>real>>imag;
    }
    void cmp_add (complex c2){
        real=real+c2.real;
        imag=imag+c2.imag;
        cout<<"The sum is:\t"<<real<<" +i"<<imag;
    }
};

int main(){
    complex c1,c2;
    c1.getdata();
    c2.getdata();
    c1.cmp_add(c2);
    return 0;
}