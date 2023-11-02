#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter {
  private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ScalarConverter &operator=(const ScalarConverter &rhs);

  public:
    ~ScalarConverter();
    static void convert(const std::string &literal);
    static void convertToChar(const std::string &literal);
    static void convertToInt(const std::string &literal);
    static void convertToFloat(const std::string &literal);
    static void convertToDouble(const std::string &literal);
};

#endif /* SCALARCONVERTER_HPP */
