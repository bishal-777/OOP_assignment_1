//We use define uder define constants by using 'const' keyword or preprocessor directive '#define'
#include<iostream>
#define pi 3.14

using namespace std;
int main(){
    int r=5,a;
    a=pi*r*r;
    cout<<"Area of circle="<<a<<endl;
    return 0;
}