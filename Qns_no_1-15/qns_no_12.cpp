/*A default argument is the default value assigned due to the absence of values in a function call when 
we supply less number of arguments than the actual number of parameters.
The rule to define is that the default argument should always start to be assigned from right side of the parameter list.*/
#include<iostream>
using namespace std;
void Student(int roll=24,double marks=99.99){
    cout<<"Roll no:\t"<<roll<<"\nMarks:\t"<<marks<<endl;

}
int main(){
    int roll;
    float marks;
    Student(24);
    return 0;
}