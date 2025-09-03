#include <iostream>
using namespace std;

void printAddresses(int byValue, int& byReference){
    cout << "The address of x passed by value (copy) is :" << &byValue << "\n";
    cout << "The address of x passed by reference is :" << &byReference << "\n";
}

int main(void){
    int x { 5 };
    cout << "The address of x in main is: " << &x << "\n";
    printAddresses(x,x);
    return 0;
}