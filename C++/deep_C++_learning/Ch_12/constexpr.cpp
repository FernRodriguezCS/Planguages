#include <iostream>
using namespace std;

constexpr int square(int x){
    return x * x;
}

int a = square(5);  // compiler replaces with 25 (no work at runtime)
int b = square(a); // runs at runtime, since 'a' isn't known yet

int main(){
    cout << a << "\n";
    cout << b << "\n";
    return 0;
}