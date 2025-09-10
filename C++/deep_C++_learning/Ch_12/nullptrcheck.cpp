#include <iostream>

void print(int* ptr){
    if(ptr)// if ptr is not null ptr
    {
        std::cout << *ptr << '\n';
    }
}

int main(void){
    int x{5};

    print(&x);
    print(nullptr);
    
    return 0;
}