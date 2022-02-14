#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N)
{}

Span::Span(Span const & src){
    *this = src;
}

Span::~Span(){}

Span& Span::operator=(Span const & src){
    if (this == &src)
        return *this;
    this->_myvector = src._myvector;
    this->_maxSize = src._maxSize;
    return *this;
}

void    Span::addNumber(int num){
    if (this->_myvector.size() >= this->_maxSize)
        throw fullSpanException();
    this->_myvector.push_back(num);
}

void    Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    while (begin != end)
    {
        addNumber(*begin);
        begin++;
    }
}

unsigned int     Span::shortestSpan(){
    isSpan();
    std::sort(this->_myvector.begin(), this->_myvector.end());
    unsigned int minDist = this->longestSpan();
    unsigned int tmpDist;
    std::vector<int>::iterator it;
    for (it = this->_myvector.begin(); it != this->_myvector.end() - 1; it++)
    {
        tmpDist = abs(*it - *(it + 1));
        if (tmpDist < minDist)
            minDist = tmpDist;
    }
    return minDist;
}

unsigned int     Span::longestSpan(){
    isSpan();
    unsigned int tmpMax = *std::max_element(this->_myvector.begin(), this->_myvector.end());
    unsigned int tmpMin = *std::min_element(this->_myvector.begin(), this->_myvector.end());
    return tmpMax - tmpMin;
}

void    Span::isSpan(){
    if (this->_myvector.size() <= 1)
        throw noSpanException();
}

void    Span::print_vect(){
    for (std::vector<int>::iterator it = this->_myvector.begin(); it != this->_myvector.end(); it++)
        std::cout << *it << " ";
    if (this->_myvector.empty())
        std::cout << "Empty vector ";
    std::cout << std::endl;
}


//------------Classe exception------------//

Span::fullSpanException::fullSpanException(){}

const char* Span::fullSpanException::what() const throw()
{
	return "Span exception : Span is already full you can't add more integer";
}

Span::noSpanException::noSpanException(){}

const char* Span::noSpanException::what() const throw()
{
	return "Span exception : need at least 2 elements to have a Span";
}