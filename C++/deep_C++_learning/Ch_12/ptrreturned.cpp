#include <iostream>
#include <typeinfo>

int main(void)
{
    int x{4};
    std::cout << typeid(x).name() << '\n'; // prints the type of x
    std::cout << typeid(&x).name() << '\n'; // prints the type of &x

    return 0;
}