/*Call by value in function is a technique of passing arugments in function When address of argument are 
passed to a function .*/
#include<iostream>

using namespace std;
void swap(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int a=5,b=6;
    cout<<"Before swapping:\t"<<"1st no:\t"<<a<<"\t2nd no:\t"<<b<<endl;
    swap(a,b);
    cout<<"After swapping:\t"<<"1st no:\t"<<a<<"\t2nd no:\t"<<b<<endl;
    return 0;
}