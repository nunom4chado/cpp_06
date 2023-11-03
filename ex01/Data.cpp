#include "Data.hpp"

Data::Data() {}

Data::Data(int val) : value(val) {}

Data::Data(const Data &src) { *this = src; }

Data::~Data() {}

Data &Data::operator=(const Data &rhs) {
    this->value = rhs.value;
    return *this;
}