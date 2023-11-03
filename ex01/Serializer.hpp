#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <stdint.h> // uintptr_t
#include <string>

class Serializer {
  private:
    Serializer();
    Serializer(const Serializer &src);
    Serializer &operator=(const Serializer &rhs);

  public:
    ~Serializer();

    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};

#endif /* SERIALIZER_HPP */
