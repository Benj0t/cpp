#ifndef ITER_HPP
# define ITER_HPP

# include "string"
# include "iostream"

template <typename T>
void    iter(T *array, int size, void ft(T &))
{
    int i = 0;
    while (i < size)
        ft(array[i++]);
}

template <typename T>
void    showTab(T &data)
{
    std::cout << data << std::endl;
}

#endif