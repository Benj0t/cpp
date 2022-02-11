#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    srand(time(NULL));
    int n = rand() % 3;

    Base *data = NULL;
    if (n == 0)
    {
        data = new A();
        std::cout << "Created an instance of A" << std::endl;
    }
    if (n == 1)
    {
        data = new B();
        std::cout << "Created an instance of B" << std::endl;
    }
    if (n == 2)
    {
        data = new C();
        std::cout << "Created an instance of C" << std::endl;
    }
    return data;
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
    {
        std::cout << "The actual type of the pointer is A" << std::endl;
    }
    if (dynamic_cast<B *>(p) != NULL)
    {
        std::cout << "The actual type of the pointer is B" << std::endl;
    }
    if (dynamic_cast<C *>(p) != NULL)
    {
        std::cout << "The actual type of the pointer is C" << std::endl;
    }
}

void identify(Base &p)
{
    try{
        A& data = dynamic_cast<A &>(p);
        std::cout << "The actual type of the pointer is A" << std::endl;
    }
    catch(std::bad_cast &bc)
    {
    }
    try{
        B& data = dynamic_cast<B &>(p);
        std::cout << "The actual type of the pointer is B" << std::endl;
    }
    catch(std::bad_cast &bc)
    {
    }
    try{
        C& data = dynamic_cast<C &>(p);
        std::cout << "The actual type of the pointer is C" << std::endl;
    }
    catch(std::bad_cast &bc)
    {
    }
}

int main(void)
{
	
	Base	*base = generate();
	
	identify(base);
	identify(*base);
	delete base;
	return 0;
}