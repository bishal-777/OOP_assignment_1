/*create a class called distance with data member cm,m and km.
Initialize all the data member using constructor and use necessary member functions to add two distance and display result. */
#include<iostream>
#include<math.h>

using namespace std;

class Distance{
    int km,m,cm;
    public:
    Distance(int x,int y,int z){
        km=x;
        m=y;
        cm=z;
    }
    void addDistance(Distance);
    void display();
};

void Distance::addDistance(Distance d){
    int a;
    a=(km+d.km)*pow(10,5)+(m+d.m)*pow(10,2)+cm+d.cm;
    km=a/pow(10,5);
    m=(a-km*pow(10,5))/pow(10,2);
    cm=a-km*pow(10,5)-m*pow(10,2);
}

void Distance::display(){
    cout<<"Added display="<<km<<"km "<<m<<"m "<<cm<<"cm"<<'\n';
}

int main(){
    Distance d1(7,398,58),d2(9,722,49);
    d1.addDistance(d2);
    d1.display();
    return 0;
}