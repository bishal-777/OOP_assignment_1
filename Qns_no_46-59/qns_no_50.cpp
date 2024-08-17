/*create a class called time with data member hour,minute,second and day.
Use constructor to initialize all the data member using constructor and use necessary member functions to add two time and display result in main function.*/
#include<iostream>
#include<math.h>
using namespace std;

class Time{
    int hr,min,sec;
    public:
    Time(int h,int m,int s){
        hr=h;
        min=m;
        sec=s;
    }
void addTime(Time t){
    int a;
    a=(hr+t.hr)*pow(60,2)+(min+t.min)*60+sec+t.sec;
    hr=a/pow(60,2);
    min=(a-hr*pow(60,2))/60;
    sec=a-hr*pow(60,2)-min*60;
}

void display(){
    cout<<"Added time="<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
}
};

int main(){
    Time t1(5,38,50),t2(9,25,59);
    t1.addTime(t2);
    t1.display();
    return 0;
}