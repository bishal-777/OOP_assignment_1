//

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