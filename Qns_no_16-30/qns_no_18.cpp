//WAP to find the area of circle,rectangle and triangle using the concept of function overloading. 
#include<iostream>
#define pi 3.14
using namespace std;

int Area(int r){
    return(pi*r*r);
}
int Area(int l,int b){
    return(l*b);
}
int Area(double b,int h){
    return((b*h)/2);
}
int main(){
    int circle,rectangle,triangle;
    circle=Area(5);
    rectangle=Area(5,6);
    triangle=Area(4.55,9);
    cout<<"Area of circle="<<circle<<"\tArea of rectangle="<<rectangle<<"\tArea of triangle="<<rectangle<<endl;
    return 0;
}