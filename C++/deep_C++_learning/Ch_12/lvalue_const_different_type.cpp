#include <iostream>
using namespace std;

int main(){
    // case 1
    const double& r1 {5}; // temporary double initialized with value 5, r1 binds to temporary
    cout << r1 << "\n"; // should print 5

    // case 2
    char c {'a'};
    const int& r2 {c}; // temporary int initialized with value 'a', r2 binds to temporary
    cout << r2 << '\n'; // prints 97 (since r2 is a reference to an int)

    return 0;
}