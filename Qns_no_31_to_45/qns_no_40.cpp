#include<iostream>
using namespace std;
class second;
class first{
    int m;
    public:
    void getdata(){
        cout<<"Enter a number:"<<endl;
        cin>>m;
    }
    friend int add(first,second);
};

class second{
    int n;
    public:
    void getdata(){
        cout<<"Enter a number:"<<endl;
        cin>>n;
    }
    friend int add(first,second);
};

int add(first x,second y){
    int a=x.m+y.n;
    return a;
}

int main(){
    first a;
    second b;
    a.getdata();
    b.getdata();
    cout<<"The addition is:"<<add(a,b)<<endl;
    return 0;
}
