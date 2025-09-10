#include <iostream>

void changeValue(int* ptr) // note: ptr is a pointer to non-const 
{
    *ptr = 6;
}

int main(void){
    int x{5};
    std::cout << "x = " << x << '\n';

    changeValue(&x); // passing by address of x 
    std::cout << "x = " << x << '\n';
    return 0;
}