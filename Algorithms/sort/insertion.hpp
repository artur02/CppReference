#ifndef INSERTION_HPP_INCLUDED
#define INSERTION_HPP_INCLUDED

#include <iostream>
#include <iomanip>
#include "../../Utility.h"

template <typename T>
class InsertionSort
    : Algo<T>
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
    Utility utility;

    for (int i=1; i< Algo<T>::count-1; i++)
    {
        T item = Algo<T>::numbers[i];
        std::cout << std::setw(2) << item << ": ";
        int hole = i;
        while(hole > 0 && Algo<T>::numbers[hole-1] > item)
        {
            Algo<T>::numbers[hole] = Algo<T>::numbers[hole-1];
            hole--;
        }

        Algo<T>::numbers[hole] =  item;

        Algo<T>::Dump();
        std::cout << std::endl;
    }

    return Algo<T>::numbers;
}

#endif // INSERTION_HPP_INCLUDED
