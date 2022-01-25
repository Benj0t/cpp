#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <sstream>

//std::isprint

#define ISCHAR   1
#define ISINT    2
#define ISFLOAT  3
#define ISDOUBLE 4

int GetDataType(std::string str)
{
    if (!(str[0]))
        return (0);
    if (str[0] == '\'' && str[str.length() - 1] == '\'')
        return (1);
    else if (str[0] == '-' || str[0] == '+')
    else if (str[str.length() - 1] == 'f')
        return (3);
    else if (str.find(".") != std::string::npos)
        return (4);
}



int main(int argc, char **argv)
{
    std::string str;
    if (argc != 2)
    {
        std::cerr << "Wrong number of arguments" << std::endl;
        return (1);
    }
    str = std::string(argv[1]);
    int ret = GetDataType(argv[1]);
    if (!ret)
        std::cerr << "Wrong argument format" << std::endl;

}