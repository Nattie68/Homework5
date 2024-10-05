#include "DynamicArr.h"


DynamicArr::DynamicArr()
{
    arr_ = new double[capacity_];
}

DynamicArr::DynamicArr(size_t size, double elem) : size_(size), capacity_(coeff_ * size_), arr_(new double[capacity_])
{
    for (size_t i = 0; i < size_; ++i)
    {
        arr_[i] = elem;
    }
}

DynamicArr::DynamicArr(const DynamicArr &rhs)
{
    size_ = rhs.size_;
    capacity_ = rhs.capacity_;
    arr_ = new double[capacity_];
    for (size_t i = 0; i < size_; ++i)
    {
        arr_[i] = rhs.arr_[i];
    }
}

DynamicArr::~DynamicArr()
{
    delete[] arr_;
}

size_t DynamicArr::size() const
{
    return size_;
}

size_t DynamicArr::capacity() const
{
    return capacity_;
}

void DynamicArr::push_back(double elem)
{
    if (size_ == capacity_)
    {
        capacity_ = coeff_ * capacity_;
        double *tmp = new double[capacity_];
        for (size_t i = 0; i < size_; ++i)
        {
            tmp[i] = arr_[i];
        }
        delete[] arr_;
        arr_ = tmp;
    }
    arr_[size_++] = elem;
}

DynamicArr &DynamicArr::operator=(const DynamicArr &copy)
{
    if (this == &copy)
    {
        return *this;
    }
    size_ = copy.size_;
    capacity_ = copy.capacity_;
    arr_ = new double[capacity_];
    for (int i = 0; i < size_; ++i)
    {
        arr_[i] = copy.arr_[i];
    }
    return *this;
}

double &DynamicArr::operator[](int elem_)
{
    return arr_[elem_];
}