#include<iostream>
using namespace std;
class box{
    int l,b,h;
    public:
    void volume(){
        int v=l*b*h;
        cout<<"Volume of box="<<v<<endl;
    } 

    box(int x,int y,int z){
        l=x;
        b=y;
        h=z;
    }
};

int main(){
    box b(1,2,3);
    b.volume();
    return 0;
}