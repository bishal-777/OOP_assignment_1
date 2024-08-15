//Create a class called distance with data member cm, m and km. Use member function to add and display result. 
#include<iostream>
using namespace std;

class dist{
    int km,m,cm;
    public:
    void getdata(){
        cout<<"Enter distance in km,m and cm:\t"<<'\n';
        cin>>km>>m>>cm;
    }
    void add(dist d){
        cm=(km+d.km)*100000+(m+d.m)*100+(cm+d.cm);
        km=cm/100000;
        m=(cm-(km*100000))/100;
        cm=cm-(km*100000)-(m*100);
    }
    void display(){
        cout<<"Added distance:\t"<<km<<"km "<<m<<"m "<<cm<<"cm"<<'\n';
    }
};

int main(){
    dist d1,d2;
    d1.getdata();
    d2.getdata();
    d1.add(d2);
    d1.display();
    return 0;
}