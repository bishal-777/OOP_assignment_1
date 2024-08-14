/*Write a program to display N numbers of characters by using default arguments for both parameters. 
Assume that the function takes two arguments: one character to be printed and another number of characters to be printed.*/
#include <iostream>

using namespace std;

void display(char character = 'N', int count = 5) {
    for (int i = 0; i < count; ++i) {
        cout << character;
    }
    cout << endl;
}

int main() {
    display();
    display('x');
    display('*', 10);
    return 0;
}


 