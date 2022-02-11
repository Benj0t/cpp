#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include "string"
#include "iostream"

template <typename T>
void    swap(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c; 
}

template <typename T>
T min(T &x, T &y)
{
    return (x < y ? x : y);
}

template <typename T>
T max(T &x, T &y)
{
    return (x > y ? x : y);
}

typedef struct  s_whatever
{
    std::string s1;
    std::string s2;
    int a;
    int b;
}               t_whatever;


#endif