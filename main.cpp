#include <iostream>
#include <include/StringFormatting.h>
using namespace std;


int main()
{
    cout << "Hello World!" << endl;
    StringFormat sf;
    std::string output;
    output = sf.format("SELECT * FROM %s WHERE t1=%s AND name=%s", "tableName", "123123", "and Java");

    std::cout << output << std::endl;

    return 0;
}
