#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
    srand(time(NULL));
    int i = std::rand() % 3;

    switch (i)
    {
        case 0:
        {
            Base *base = new A();
            return base; 
            break;
        }
        case 1:
        {
            Base *base = new B();
            return base; 
            break;
        }
        default:
        {
            Base *base = new C();
            return base;
            break;
        }
    }
}

void identify(Base* p) {
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "This is class A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "This is class B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "This is class C" << std::endl;
}

void identify(Base& p) {
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "This is class A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            dynamic_cast<B&>(p);
            std::cout<< "This is class B"<< std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                dynamic_cast<C&>(p);
                std::cout<< "This is class C"<< std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << "This is Base class" << std::endl;
            }
        }
    }
}

int main () {
    Base* base = generate();

    identify(base);
    identify(*base);
    delete(base);
    return (0);
}