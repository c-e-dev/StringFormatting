#include <iostream>
#include <include/StringFormatting.h>
using namespace std;


int main()
{
    cout << "Hello World!" << endl;
    StringFormat sf;
    std::string output;
    output = sf.format("Hi! My name is %s. %s C++ %s", "Andrey", "I learning", "and Java");

    std::cout << output << std::endl;

    return 0;
}
