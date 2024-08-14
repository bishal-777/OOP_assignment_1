// WAP to show “Returning objects from functions”. 
//This is the same qns from qns no 31 but it returns objects as per qns demand
#include<iostream>
using namespace std;

class dist{
    int km,m,cm;
    public:
    void getdata(){
        cout<<"Enter distance in km,m and cm:\t"<<'\n';
        cin>>km>>m>>cm;
    }
    dist add(dist d){
        dist o;
        cm=(km+d.km)*100000+(m+d.m)*100+(cm+d.cm);
        km=cm/100000;
        m=(cm-(km*100000))/100;
        cm=cm-(km*100000)-(m*100);
        o.km=km;
        o.m=m;
        o.cm=cm;
        return o;
    }
    void display(){
        cout<<"Added distance:\t"<<km<<"km "<<m<<"m "<<cm<<"cm"<<'\n';
    }
};

int main(){
    dist d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3=d1.add(d2);
    d3.display();
    return 0;
}