//Function overloading with different type of arguments:
#include<iostream>
#define pi 3.14
using namespace std;

int area(int l){
    return (l*l);
}

int area(float r){
    return (pi*r*r);
}

int main(){
    int l1,r2;
    cout<<"Enter length of square:"<<endl;
    cin>>l1;
    cout<<"Enter radius of circle:"<<endl;
    cin>>r2;
    cout<<"Area of Square="<<area(l1)<<endl;
    cout<<"Area of circle="<<area(r2)<<endl;
    return 0;
}