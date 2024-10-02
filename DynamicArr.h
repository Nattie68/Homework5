#pragma once

#include <cstddef>

class DynamicArr
{
private:
    static const size_t initialCapasity_ = 2;
    static const double coeff_;

    size_t size_ = 0;
    size_t capacity_ = initialCapasity_;
    double *arr_;

public:
    DynamicArr();
    DynamicArr(size_t size, double element = 0);
    DynamicArr(const DynamicArr &rhs);
    ~DynamicArr();
    size_t size() const;
    size_t capacity() const;
    void push_back(double elem);
    double &operator[](int elem_);
    DynamicArr &operator=(const DynamicArr &copy);
};