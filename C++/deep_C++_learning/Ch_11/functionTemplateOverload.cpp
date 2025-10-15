#include <iostream>

// add two values wth matching types
template <typename T>
auto add(T x, T y)
{
    return x + y;
}

// add two values with non-matching types
// As of C++20 we could also use auto add(auto x, auto y)
template <typename T, typename U>
auto add(T x, U y)
{
    return x + y;
}

// add three values with any type
// As of C++20 we could also use auto add(auto x, auto y, auto z)
template <typename T, typename U, typename V>
auto add(T x, U y, V z)
{
    return x + y + z;
}

int main(void)
{
    std::cout << add(1.2, 3.4) << '\n'; // add<double>()
    std::cout << add(5.6, 7) << '\n';   // add<double, int>()
    std::cout << add(8, 9, 10) << '\n'; // add<int, int, int>()

    return 0;
}