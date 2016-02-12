#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void makefile(unsigned long i)
{
    ostringstream Str;
    Str << i;
    string fileName(Str.str());
    std::string fileNameStr = fileName + std::string(".txt");

    std::ofstream file (fileNameStr.c_str());

    file << "0" << std::endl;
    file.close();
}

int main()
{
    std::cout << "0" << std::endl;
    unsigned long a = 0;
    while (true) {
    makefile(a);
    std::cout << a << std::endl;
    a++;
    }
}
