//WAP to find the volume of cube, cuboid and cylinder using the concept of function overloading. 
#include<iostream>
#define pi 3.14
using namespace std;

int Volume(int l){
    return(l*l*l);
}
int Volume(int l,int b,int h){
    return(l*b*h);
}
int Volume(double r,int h){
    return(pi*r*r*h);
}
int main(){
    int cube,cuboid,cylinder;
    cube=Volume(5);
    cuboid=Volume(5,6,7);
    cylinder=Volume(4.55,9);
    cout<<"Volume of cube="<<cube<<"\tVolume of cuboid="<<cuboid<<"\tVolume of cylinder="<<cuboid<<endl;
    return 0;
}