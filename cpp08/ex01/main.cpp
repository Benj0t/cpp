#include "Span.hpp"
#define SIZE_VECT 10000
#define RAND_LIM 2147483647

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
        std::cout << std::endl  << "--------Test range basic span --------" << std::endl;
        Span sp = Span(SIZE_VECT);
        int start = -12, stop = 2147483647, step = 3;
        try{
            sp.addNumRange(start, stop, step);
        } catch(const std::exception& e){
            std::cerr << e.what() << std::endl;
        }
        std::cout << "In vector : ";
        sp.print_vect();
        std::cout << std::endl;
        try{
            std::cout << "In  vector  of size : "<< SIZE_VECT << " with value from " << start << " to " << stop <<" with step of " << step << std::endl ;
            std::cout << "Shortest span = " <<  sp.shortestSpan() << std::endl;
            std::cout << "Longest span = " << sp.longestSpan() << std::endl;
        }catch(const std::exception& e){
            std::cerr << e.what() << std::endl;
        }
    }
    {
        Span sp = Span(SIZE_VECT);
        sp.addNumber(99);
        try{
            sp.addNumber(999);
        } catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "In  vector  of size : "<< SIZE_VECT<< " with value from 0 to " << RAND_LIM << std::endl ;
        std::cout << "Shortest span = " <<  sp.shortestSpan() << std::endl;
        std::cout << "Longest span = " << sp.longestSpan() << std::endl;
    }
    {
        std::cout << std::endl  << "--------Test add vector span --------" << std::endl;
        Span sp = Span(1);
        std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        try{
            sp.addNumbers(vec);
        } catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "In  vector  of size : "<< SIZE_VECT<< " with value from 0 to " << RAND_LIM << std::endl ;
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
