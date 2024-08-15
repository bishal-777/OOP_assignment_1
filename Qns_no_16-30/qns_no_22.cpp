//WAP creating a function that passes two temperatures by reference and sets the larger one to 100.
#include<iostream>
using namespace std;
void Tempre(double *t1,double *t2){
    if(*t1>*t2){
        *t1=100;
    }else{
        *t2=100;
    }
}
int main(){
    double t1=34.45,t2=39.64;
    cout<<"Before using function Tempre:\tt1="<<t1<<"\tt2="<<t2<<endl;
    Tempre(&t1,&t2);
    cout<<"After using function Tempre:\tt1="<<t1<<"\tt2="<<t2<<endl;
    return 0;
}