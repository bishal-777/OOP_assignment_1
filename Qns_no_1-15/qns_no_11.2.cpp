#include<iostream>
#define pi 3.14

using namespace std;
inline int area(int r){
    return(pi*r*r);
}
int main(){
    cout<<"Area of circle="<<area(5)<<endl;
    return 0;
}