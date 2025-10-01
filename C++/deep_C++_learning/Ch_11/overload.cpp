#include <iostream>

int add(int x, int y) { return x + y; }

double add(double x, double y) { return x + y; }

int main(void)
{
    std::cout << add(1, 2) << '\n'; // calls add(int, int)
    std::cout << add(1.2, 3.4);     // calls add(double, double)

    return 0;
}