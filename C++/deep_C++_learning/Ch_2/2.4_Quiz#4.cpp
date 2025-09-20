#include <iostream>

int readIntFromUser()
{
    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

int doubleNumber(int num){return num * 2;}

int main(void)
{
    std::cout << doubleNumber(readIntFromUser()) << '\n'; 
    return 0;
}