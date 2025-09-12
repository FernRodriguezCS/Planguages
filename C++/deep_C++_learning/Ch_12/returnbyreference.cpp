#include <iostream>
#include <string>

const std::string& getProgramName() // returns a const referece
{
    static const std::string s_programName{"Calculator"}; // has static duration, destroyed at end of program
    return s_programName;
}

int main(void){
    std::cout << "This program is named " << getProgramName();

    return 0;
}