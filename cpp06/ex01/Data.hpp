#ifndef DATA_HPP
# define DATA_HPP

# include <stdint.h>
# include <iostream>

typedef struct  s_Data
{
    int         n;
    std::string str;
    char        c;
}               Data;

uintptr_t       serialize(Data *p);
Data *          deserialize(uintptr_t nb);

std::ostream	&operator<<(std::ostream &out, const Data &ptr);

#endif