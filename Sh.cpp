#include <cstddef>

template <typename T>
class Array
{
    // Список операций:
    //
    explicit Array(size_t size = 0, const T& value = T()) : size_(size), arr_(new T[size_]
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Считайте что у типа T есть
    //   конструктор, который можно вызвать без
    //   без параметров, либо он ему не нужен.
    
                                                                              
     {                                                                    
            for (int i=0; i<size_;++i)
            {
                arr_[i] = value;   
            }
     }                                                                       
    Array(const Array &rsh)
    //   конструктор копирования, который создает
    //   копию параметра. Считайте, что для типа
    //   T определен оператор присваивания.
    {
        size_=rsh.size_;
        arr_ = new T[size_];
        for (int i=0; i<size_;++i)
            {
                arr_[i] = rsh.arr_[i];   
            }
    }
     ~Array(){
    //   деструктор, если он вам необходим.
      delete[] arr_;
     }
    Array& operator=(const T& rsh){
    //   оператор присваивания.
         if (this == &rsh){
             return *this;
         }
        size_=rsh.size_;
        arr_ = new T[size_];
        for (int i=0; i<size_;++i)
            {
                arr_[i] = rsh.arr_[i];   
            }
        return *this;
    }
    size_t size() const{
    //   возвращает размер массива (количество
    //                              элементов).
        return size_;
        }
    T& operator[](size_t elem){
        return arr_[elem];
    }
        
    const T& operator[](size_t elem) const{
        return arr_[elem];
    }
    //   две версии оператора доступа по индексу.
};