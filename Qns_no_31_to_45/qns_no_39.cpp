#include<iostream>
using namespace std;

class second;

class first{
    int n1;
    public:
    void getdata(){
        cout<<"Enter a number:";
        cin>>n1;
    }
    friend class second;
};

class second{
    int n2;
    public:
    void getdata(){
        cout<<"Enter number"<<'\n';
        cin>>n2;
    }
    void greater(first a){
        int n=a.n1>n2?a.n1:n2;
        cout<<n<<"\tis the greater number"<<endl;
    }
};

int main(){
    first a;
    second b;
    a.getdata();
    b.getdata();
    b.greater(a);
    return 0;
}
