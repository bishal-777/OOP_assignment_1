/*Call by value in function is a technique of passing arugments in function When values of actual argument are 
passed to a function .*/
#include<iostream>

using namespace std;
int area(int l,int b){
    return (l*b);
}
int main(){
    cout<<"Area of rectangle="<<area(5,6)<<endl;
    return 0;
}