//Function overloading is a technique in C++ where a function with same name but have different no or type of argument or even different task
//Function overloading with different number of arguments:
#include<iostream>

using namespace std;

int area(int l){
    return (l*l);
}

int area(int l,int b){
    return (l*b);
}

int main(){
    int l1,l2,b2;
    cout<<"Enter length of square:"<<endl;
    cin>>l1;
    cout<<"Enter length and breadth of square:"<<endl;
    cin>>l2>>b2;
    cout<<"Area of Square="<<area(l1)<<endl;
    cout<<"Area of rectangle="<<area(l2,b2)<<endl;
    return 0;
}
