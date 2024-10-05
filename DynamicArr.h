
#pragma once

#include <cstddef>

class DynamicArr
{
private:
    static const size_t initialCapasity_ = 2;
    const int coeff_ = 2;

    size_t size_ = 0;
    size_t capacity_ = initialCapasity_;
    double *arr_;

public:
    DynamicArr();
    DynamicArr(size_t size, double element = 0) : size_(size), capacity_(coeff_ * size), arr_(new double[capacity_])
    {
        for (int i = 0; i < size_; ++i)
        {
            arr_[i] = element;
        }
    }
    DynamicArr(const DynamicArr &rhs)
    {
        size_ = rhs.size_;
        capacity_ = rhs.capacity_;
        arr_ = new double[capacity_];
        for (int i = 0; i < size_; ++i)
        {
            arr_[i] = rhs.arr_[i];
        }
    }
    ~DynamicArr()
    {
        delete[] arr_;
    }
    size_t size() const
    {
        return size_;
    }
    size_t capacity() const
    {
        return capacity_;
    }
    void push_back(double elem)
    {
        if (size_ == capacity_)
        {
            capacity_ = capacity_ * coeff_;
            double *tmp = new double[capacity_];
            for (int i = 0; i < size_; ++i)
            {
                tmp[i] = arr_[i];
            }
            delete[] arr_;
            arr_ = tmp;
        }
        arr_[size_++] = elem;
    }
    double &operator[](int elem_);
    DynamicArr &operator=(const DynamicArr &copy);
};