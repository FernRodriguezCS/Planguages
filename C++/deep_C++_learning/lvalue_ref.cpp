#include <iostream>
using namespace std;

int main(){
    int x {1};
    int& ref {x};
    cout << x << ref << "\n"; 
    int y {2};
    ref = y;    
    y = 3;      
    cout << x << ref << "\n"; 
    x = 4;
    cout << x << ref << "\n";   
    return 0;
}