#include <iostream>

template <typename T, typename U>
T max(T x, U y){
    return (x < y) ? y : x;
}

int main(void){
    std::cout << max(2, 3.5) << '\n'; // resolves to max<int, double>
    return 0;
}