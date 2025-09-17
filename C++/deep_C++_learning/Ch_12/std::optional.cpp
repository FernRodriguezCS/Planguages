#include <iostream>
#include <fstream>
#include <optional>
#include <string>

std::optional<std::string> readFileFirstLine(const std::string& filename)
{
    std::ifstream file(filename); // try to open
    if(!file.is_open())
    {
        return {}; // return empty potional if file couldn't be opened
    }

    std::string line;
    if(std::getline(file,line))
    {
        return line; // return first line if available
    }

    return {}; // file opened but empty -> also return an optional
}

int main()
{
    auto result = readFileFirstLine("does_not_exist.txt");

    if(result)
    {
        std::cout << "First line: " << *result << '\n';
    }else
    {
        std::cout << "Error: Could not open file or file is empty.\n";
    }
    return 0;
}