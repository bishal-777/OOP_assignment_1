/*Namespace is a container for variables,functions,classes and other identifiers that avoids conflicts residing in different scopes.
We need this to avoid naming conflicts in our program*/
#include<iostream>

using namespace std;
namespace Bishal{
    int marks =99;
}
namespace Abhijeet{
    int marks=95;
}

int main(){
    cout<<"Marks of Bishal="<<Bishal::marks<<endl;
    cout<<"Marks of Abhijeet="<<Abhijeet::marks<<endl;
    return 0;
}