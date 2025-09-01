// # -> stringizes whatever is after it
// "\" -> continue to next line
// int x{5} == int x = 5 -> brace initialization

#include <iostream>
#include <string>

template <class T>
constexpr bool is_lvalue(T&) { return true; }

template <class T>
constexpr bool is_lvalue(T&&) { return false; }

#define PRINTVCAT(expr) \
  (std::cout << #expr << " is an " \
             << (is_lvalue((expr)) ? "lvalue" : "rvalue") \
             << '\n')

int getint(){ return 5; }

int main(){
    PRINTVCAT(5);
    PRINTVCAT(getint());
    int x{5};
    PRINTVCAT(x);
    PRINTVCAT(std::string{"Hello"});
    PRINTVCAT(++x);
    PRINTVCAT(x++);
}