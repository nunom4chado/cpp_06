#include "ScalarConverter.hpp"
#include <iomanip> // std::setprecision
#include <iostream>
#include <limits>   // std::numeric_limits
#include <math.h>   // isnan, isinf
#include <stdlib.h> /* atof */

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) { *this = src; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
    (void)rhs;
    return *this;
}

void ScalarConverter::convertToChar(const std::string &literal) {
    float nbr = static_cast<float>(atof(literal.c_str()));

    if (nbr < 0 || nbr > 127 || std::isnan(nbr) || std::isinf(nbr)) {
        std::cout << "char: impossible" << std::endl;
    } else if (nbr < 32 || nbr > 126) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
    }
}

void ScalarConverter::convertToInt(const std::string &literal) {

    float nbr = static_cast<float>(atof(literal.c_str()));

    if (nbr < static_cast<float>(std::numeric_limits<int>::min()) ||
        nbr > static_cast<float>(std::numeric_limits<int>::max()) ||
        std::isnan(nbr) || std::isinf(nbr)) {
        std::cout << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << static_cast<int>(nbr) << std::endl;
    }
}

void ScalarConverter::convertToFloat(const std::string &literal) {
    float nbr = static_cast<float>(atof(literal.c_str()));

    if (nbr < -static_cast<float>(std::numeric_limits<float>::max()) ||
        nbr > static_cast<float>(std::numeric_limits<float>::max())) {
        std::cout << "float: impossible" << std::endl;
    } else {
        std::cout << "float: " << std::fixed << std::setprecision(1) << nbr
                  << "f" << std::endl;
    }
}

void ScalarConverter::convertToDouble(const std::string &literal) {

    double nbr = atof(literal.c_str());

    if (nbr < -std::numeric_limits<double>::max() ||
        nbr > std::numeric_limits<double>::max()) {
        std::cout << "double: impossible" << std::endl;
    } else {
        std::cout << "double: " << std::fixed << std::setprecision(1) << nbr
                  << std::endl;
    }
}

void ScalarConverter::convert(const std::string &literal) {
    convertToChar(literal);
    convertToInt(literal);
    convertToFloat(literal);
    convertToDouble(literal);
}