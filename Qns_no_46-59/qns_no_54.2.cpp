#include<iostream>
using namespace std;

class student{
    int roll;
    public:
    student(int r){
       roll=r;
    }
    int display()const{
        return roll;
    }
};

int main(){
    const student s1(24);
    cout<<"ROll no:\t"<<s1.display()<<endl;
    return 0;
}