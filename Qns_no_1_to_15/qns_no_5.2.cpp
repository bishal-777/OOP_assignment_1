#include<iostream>
using namespace std;
int main(){
    double Weight;
    Weight=70.52;
    cout<<"Weight="<<Weight<<endl;
    int newWeight=static_cast<int>(Weight);
    cout<<"Weight="<<newWeight<<endl;
    return 0;
}