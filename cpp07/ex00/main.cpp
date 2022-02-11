#include "whatever.hpp"

int main()
{
    t_whatever data;

    data.s1 = "AAAA";
    data.s2 = "BBBB";
    swap(data.s1, data.s2);
    std::cout << "s1: " << data.s1 << std::endl;
    std::cout << "s2: " << data.s2 << std::endl;
    std::cout << "min (s1, s2): " << min(data.s1, data.s2) << std::endl;
    std::cout << "max (s1, s2): " << max(data.s1, data.s2) << std::endl;


    std::cout << std::endl;
    data.a = 10;
    data.b = 42;
    swap(data.a, data.b);
    std::cout << "a: " << data.a << std::endl;
    std::cout << "b: " << data.b << std::endl;
    std::cout << "min (a, b): " << min(data.a, data.b) << std::endl;
    std::cout << "max (a, b): " << max(data.a, data.b) << std::endl;
}