#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base::~Base() {}

/* -------------------------------------------------------------------------- */
/*                                   Others                                   */
/* -------------------------------------------------------------------------- */

Base *generate(void) {

    /* generate number between 0 and 2: */
    switch (std::rand() % 3) {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    default:
        return NULL;
    }
}

void identify(Base *p) {
    std::cout << "--identify via pointer--" << std::endl;

    if (!p) {
        std::cout << "pointing to NULL" << std::endl;
        return;
    }

    if (dynamic_cast<A *>(p))
        std::cout << "Type A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Type B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Type C" << std::endl;
    else
        std::cout << "Unkown Type" << std::endl;
}

void identify(Base &p) {
    std::cout << "--identify via reference--" << std::endl;
    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "Type A" << std::endl;
    } catch (const std::exception &e) {
        try {
            B &b = dynamic_cast<B &>(p);
            (void)b;
            std::cout << "Type B" << std::endl;
        } catch (const std::exception &e) {
            try {
                C &c = dynamic_cast<C &>(p);
                (void)c;
                std::cout << "Type C" << std::endl;
            } catch (const std::exception &e) {
                std::cout << "Unkown Type" << std::endl;
            }
        }
    }
}