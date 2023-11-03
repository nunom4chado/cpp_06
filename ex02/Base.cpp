#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

Base::~Base() {}

Base *Base::generate(void) {
    /* initialize random seed: */
    srand((unsigned int)time(NULL));

    /* generate number between 0 and 2: */
    int n = rand() % 3;

    if (n == 0)
        return new A;
    else if (n == 1)
        return new B;
    return new C;
}