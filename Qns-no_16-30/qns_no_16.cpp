//What	are	enumerations	in	C++?	WAP	to show	the use of enumerations in C++. 

/*Enumerations (enums) are user-defined data types in C++ that consist of a set of named integer constants. 
They provide a way to assign meaningful names to integral values, making code more readable and maintainable. */
#include<iostream>
using namespace std;
enum Sub{OOP,ECM,Math,Chemistry,EDC,DL};
int main(){
    Sub s1,s2;
    s1=OOP;
    s2=EDC;
    cout<<"Subject no of OOP="<<s1<<endl;
    cout<<"Subject no of EDC="<<s2<<endl;
    return 0;
}