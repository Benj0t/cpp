#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <stdlib.h>
# include <sys/time.h>

class NotFound: public std::exception{
    public :
        virtual const char * what() const throw(){
            return ("Could not find the number in the container");
        }
};

template <typename T>
int easyfind(T data, int n)
{
    typename T::iterator it = std::find(data.begin(), data.end(), n);
    if (it == data.end())
        throw(NotFound());
    return (*it);
}

#endif