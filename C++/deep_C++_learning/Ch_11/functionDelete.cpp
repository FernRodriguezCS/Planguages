#include <iostream>

// this function will take precedence for arguments of type int
void printInt(int x)
{
    std::cout << x;
    << '/n';
}

// this function template will take precedence for arguments of other types
// since this function template is deleted, calls to it will halt compilation
template <typename T>
void printInt(T x) = delete;

int main(void)
{
    printInt(97);   // okay
    printInt('a');  // compilation error
    printInt(true); // compilation error

    return 0;
}