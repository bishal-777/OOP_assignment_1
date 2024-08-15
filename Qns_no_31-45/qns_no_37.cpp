/*Why do we need friend function? List its properties. Wap to add one data member of two different class using the concept of friend function. 

Friend functions are used in C++ to allow a non-member function or another class to access private and protected members of a class. 
Properties: 
Not Member Functions: Defined outside the class but declared inside. 
Access Private and Protected Members: Can access private and protected data. 
Not Inherited: Not inherited by derived classes. 
No this Pointer: Does not have a this pointer. */
#include<iostream>
using namespace std;
class c2;
class c1{
    int a;
    public:
    void getdata1(){
        cout<<"Enter number:";
        cin>>a;
    }
    friend int add(c1,c2);
};

class c2{
    int b;
    public:
    void getdata2(){
        cout<<"Enter number:";
        cin>>b;
    }
    friend int add(c1,c2);
};

int add(c1 x,c2 y){
    int c=x.a+y.b;
    return c;
}

int main(){
    c1 a1;
    c2 b1;
    a1.getdata1();
    b1.getdata2();
    int x=add(a1,b1);
    cout<<"The sum is:"<<x<<endl;
    return 0;
}