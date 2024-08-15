//WAP to calculate simple interest by using the concept of default arguments with default values of rate = 15%. 
#include<iostream>

using namespace std;
int SI(int p,int t,int r=15){
    return (p*t*r);
}

int main(){
    int si;
    si=SI(5000,5);
    cout<<"Simple intrest="<<si<<endl;
    return 0;
}
