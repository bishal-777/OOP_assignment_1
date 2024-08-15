//WAP to find the equivalent resistance in series and parallel for given two resistance r1 and r2. 
#include<iostream> 
#include<iostream>
using namespace std;
class eqv{
    int r1,r2;
    public:
    void getdata(){
        cout<<"Enter the two resistances:"<<'\n';
        cin>>r1>>r2;
    }
    void resistance(){
        int s,p;
        s=r1+r2;
        p=(r1*r2)/r1+r2;
        cout<<"Series equivalent resistance="<<s<<"\t"<<"parallel equivalent resistance="<<p;
    }
};

int main(){
    eqv e1;
    e1.getdata();
    e1.resistance();
    return 0;
}