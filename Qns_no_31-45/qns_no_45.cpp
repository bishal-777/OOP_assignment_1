//WAP to initialize an object of class with parameterized constructor and copy this object of class into another object using copy constructor. 
#include<iostream>
#include<string.h>
using namespace std;

class employee{
    int emp_id;
    int salary;
    public:
    employee(int e,int s){
        emp_id=e;
        salary=s;
    }
    
    employee(employee &e){
        emp_id=e.emp_id;
        salary=e.salary;
    }
    void display(){
        cout<<"Employee ID:"<<emp_id<<endl;
        cout<<"Salary:\t"<<salary<<endl;
    }
};

int main(){
    employee e1(24,100000);
    employee e2(e1);
    e1.display();
    e2.display();
    return 0;
}
 