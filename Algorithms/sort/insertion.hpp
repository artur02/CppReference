#ifndef INSERTION_HPP_INCLUDED
#define INSERTION_HPP_INCLUDED

#include <iostream>
#include <iomanip>
#include "../../Utility.h"

template <typename T>
class InsertionSort
{
    T* numbers;
    int count;
public:
    InsertionSort(T* numbers, int count);
    T* Sort();
};

template <typename T>
InsertionSort<T>::InsertionSort(T* numbers, int count)
    :numbers(numbers),
    count(count)
{ }

template <typename T>
T* InsertionSort<T>::Sort()
{
    Utility utility;

    for (int i=1; i<count-1; i++)
    {
        T item = numbers[i];
        std::cout << std::setw(2) << item << ": ";
        int hole = i;
        while(hole > 0 && numbers[hole-1] > item)
        {
            numbers[hole] = numbers[hole-1];
            hole--;
        }

        numbers[hole] =  item;

        utility.dump(numbers, count);
        std::cout << std::endl;
    }

    return numbers;
}

#endif // INSERTION_HPP_INCLUDED
