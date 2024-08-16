/*The process of allocating and deallocating memory at runtime is known as dynamic memory allocation.
We can implement this using new and delete operator*/
#include<iostream>

using namespace std;
int main(){
    int roll,*p;
    p=new int;
    cout<<"Enter your roll no:"<<endl;
    cin>>*p;
    cout<<"Roll no:\t"<<*p<<endl;
    delete p;
    return 0;
}