//WAP to relate default argument and function overloading in the same program.
//I created it for the qns no 19
#include<iostream>
#define pi 3.14
using namespace std;

int Volume(int l){
    return(l*l*l);
}
int Volume(int l,int b,int h=5){
    return(l*b*h);
}
int Volume(double r=5.55,int h=4){
    return(pi*r*r*h);
}
int main(){
    int cube,cuboid,cylinder;
    cube=Volume(5);
    cuboid=Volume(5,6,7);
    cylinder=Volume(4.55);
    cout<<"Volume of cube="<<cube<<"\tVolume of cuboid="<<cuboid<<"\tVolume of cylinder="<<cuboid<<endl;
    return 0;
}