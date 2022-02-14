#include "Span.hpp"

int main()
{
    srand(time(NULL));
    {
        std::cout << "--------Test subject span --------" << std::endl;
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        try{
            sp.addNumber(60);
        } catch(std::exception & e){
            std::cout << e.what() << std::endl;
        }
        std::cout << "In vector : ";
        sp.print_vect();
        std::cout << std::endl << "Shortest span = " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span = " << sp.longestSpan() << std::endl;
    }
    {
        std::cout << std::endl <<"--------Test empty and 1 elem span --------" << std::endl;
        Span sp = Span(2);
        sp.print_vect();
        try{ //empty vec
            std::cout << std::endl << "Shortest span = " << sp.shortestSpan() << std::endl;
            std::cout << "Longest span = " << sp.longestSpan() << std::endl;
        } catch(std::exception & e){
            std::cout << e.what() << std::endl;
        }
        sp.addNumber(6);
        try{ //1 elem vect
            std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
            std::cout << "Longest span = " << sp.longestSpan() << std::endl;
        } catch(std::exception & e){
            std::cout << e.what() << std::endl;
        }
        sp.addNumber(6);
        try{ // 2 elem vect
            std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
            std::cout << "Longest span = " << sp.longestSpan() << std::endl;
        } catch(std::exception & e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl  << "--------Test fill span with iterator range --------" << std::endl;
        Span sp = Span(10000);
        std::vector<int>::iterator it;
        std::vector<int>::iterator ite;
        std::vector<int> vec(10001, 42);
        try{
            sp.addNumbers(vec.begin(), vec.end());
            sp.addNumber(10);
        } catch(const std::exception& e){
            std::cerr << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "In vector : ";
        sp.print_vect();
        std::cout << std::endl;
        try{
            std::cout << "In  vector  of size : "<< 10000 << " with value 42" << std::endl ;
            std::cout << "Shortest span = " <<  sp.shortestSpan() << std::endl;
            std::cout << "Longest span = " << sp.longestSpan() << std::endl;
        }catch(const std::exception& e){
            std::cerr << e.what() << std::endl;
        }
    }
    {
        Span sp = Span(2);
        sp.addNumber(99);
        try{
            sp.addNumber(999);
        } catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "In  vector  of size : "<< 2<< " with values 99 and 999 " << std::endl ;
        std::cout << "Shortest span = " <<  sp.shortestSpan() << std::endl;
        std::cout << "Longest span = " << sp.longestSpan() << std::endl;
    }
    return 0;
}

// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }