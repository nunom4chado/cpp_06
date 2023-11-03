#include "Base.hpp"
#include <cstdlib>
#include <ctime>

int main() {
    /* initialize random seed: */
    std::srand((unsigned int)std::time(NULL));

    Base *one = generate();
    Base *two = generate();
    Base *three = generate();
    Base *four = generate();

    identify(one);
    identify(*one);
    identify(two);
    identify(*two);
    identify(three);
    identify(*three);
    identify(four);
    identify(*four);

    Base *five = NULL;

    identify(five);

    delete one;
    delete two;
    delete three;
    delete four;

    return 0;
}