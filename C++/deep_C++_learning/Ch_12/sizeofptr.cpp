// this was compiled on my 64 bit system macbook.
#include <iostream>

int main(void)
{
    char *chPtr{};        // chars are 1 byte
    int *iPtr{};          // ints are usually 4 bytes
    long double *ldPtr{}; // long doubles are usually 8 or 12 bytes

    std::cout << sizeof(chPtr) << '\n'; // prints 8
    std::cout << sizeof(iPtr) << '\n';  // prints 8
    std::cout << sizeof(ldPtr) << '\n'; // prints 8

    return 0;
}