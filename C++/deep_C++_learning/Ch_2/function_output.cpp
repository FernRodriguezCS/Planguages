#include <iostream>

void doB()
{
	std::cout << "in doB()\n";
}

void doA()
{
	std::cout << "in doA()\n";
	doB();
}

int main()
{
	std::cout << "Starting main()\n";
	doA();
	doB();
	std::cout << "Ending main()\n";
	std::cout << std::endl;
	return 0;
}

