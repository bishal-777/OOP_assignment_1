//A reference variable is an alternative name or alias for a variable.
#include<iostream>

using namespace std;
int main(){
    int student_roll=24;
    int &BCT_student_roll=student_roll;
    cout<<"Student roll no="<<student_roll<<"\nComputer Engineering student roll no="<<BCT_student_roll<<endl;
    return 0;
}