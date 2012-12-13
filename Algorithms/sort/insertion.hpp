#ifndef INSERTION_HPP_INCLUDED
#define INSERTION_HPP_INCLUDED

#include <iostream>
#include <iomanip>
#include "../../Utility.h"

template <typename T>
class InsertionSort
    : public Algo<T>
{

public:
    InsertionSort(T* numbers, int count);
    virtual T* Sort();
};

template <typename T>
InsertionSort<T>::InsertionSort(T* numbers, int count)
    : Algo<T>::Algo(numbers, count)
{ }

template <typename T>
 T* InsertionSort<T>::Sort()
{
    for (int i=1; i< this->count-1; i++)
    {
        T item = this->numbers[i];
        std::cout << std::setw(2) << item << ": ";
        int hole = i;
        while(hole > 0 && this->numbers[hole-1] > item)
        {
            this->numbers[hole] = this->numbers[hole-1];
            hole--;
        }

        this->numbers[hole] =  item;

        this->Dump();
        std::cout << std::endl;
    }

    return this->numbers;
}

#endif // INSERTION_HPP_INCLUDED
