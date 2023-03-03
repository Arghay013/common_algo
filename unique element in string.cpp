#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string str = "hello world";
    str.erase(std::unique(str.begin(), str.end()), str.end());

    std::cout << "Unique characters in string: " << str << std::endl;

    return 0;
}
