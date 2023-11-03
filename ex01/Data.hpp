#ifndef DATA_HPP
#define DATA_HPP

struct Data {

    int value;

    Data(int val);
    Data(const Data &src);
    ~Data();
    Data &operator=(const Data &rhs);

  private:
    Data();
};

#endif /* DATA_HPP */
