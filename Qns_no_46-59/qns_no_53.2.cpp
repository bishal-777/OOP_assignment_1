#include <iostream>
using namespace std;

class Student {
    int roll;
    double marks;
    public:
    void getdata(int r, double m) {
        roll = r;
        marks = m;
    }
    
    void showdata(){
        cout<< "Roll no: " <<roll<< ", Marks: "<<marks<< endl;
    }
};

int main() {
    int n,i;
    cout<<"Enter the number of students: ";
    cin>>n;
    Student* students = new Student[n];
    for (i=0;i<n;i++) {
        int roll;
        double marks;
        cout<<"Enter roll number and marks for student "<<i+1<<":";
        cin>>roll>>marks;
        students[i].getdata(roll,marks); 
    }
    cout<<"\nStudent Data:"<<endl;
    for(i=0;i<n;i++) {
        students[i].showdata();
    }
    delete[]students;

    return 0;
}
