#include "Serializer.hpp"
#include <iostream>

int main() {

    Data n = 42;

    std::cout << "n value is: " << n.value << std::endl;

    uintptr_t ptr = Serializer::serialize(&n);

    std::cout << "ptr value is: " << ptr << std::endl;

    Data *x = Serializer::deserialize(ptr);

    std::cout << "x value is: " << x->value << std::endl;

    std::cout << "n address: " << &n << ", x address: " << x << std::endl;

    return 0;
}