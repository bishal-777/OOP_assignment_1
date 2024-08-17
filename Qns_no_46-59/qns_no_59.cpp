//Explain about the invocation order of constructor and dectructor with the help of examples. 
#include<iostream>
using namespace std;

int count = 0;

class alpha {
public:
    alpha() {
        count++;
        cout << "\nNo. of objects created: " << count;
    }

    ~alpha() {
        cout << "\nNo. of objects destroyed: " << count;
        count--;
    }
};

int main() {
    cout << "Enter main\n";
    alpha a1, a2, a3, a4;

    {
        cout << "Enter block 1\n";
        alpha a5;
    }

    {
        cout << "\nEnter block 2";
        alpha a6;
    }

    cout << "\n\nRe-enter main\n";
    return 0;
}
