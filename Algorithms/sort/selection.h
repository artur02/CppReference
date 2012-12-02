#ifndef SELECTION_H_INCLUDED
#define SELECTION_H_INCLUDED

#include <iostream>
#include <limits>
#include <utility>

#include "../algo.h"
#include "selection.h"
#include "../../Utility.h"

template <typename T>
class SelectionSort
{
    const T* numbers;
    int count;
public:
    SelectionSort(const T* numbers, int count);
    T* Sort();
};



template <typename T>
SelectionSort<T>::SelectionSort(const T* numbers, int count)
    :numbers(numbers),
    count(count)
{}

template <typename T>
T* SelectionSort<T>::Sort()
{
    Utility utility;

    T* sorted = new T[count];
    for (int i = 0; i<count; i++)
    {
        sorted[i] = numbers[i];
    }

    for (int i = 0; i<count; i++)
    {
        int minindex = utility.findMin(sorted, i, count);
        T temp = sorted[i];
        sorted[i] = sorted[minindex];
        sorted[minindex] = temp;

        utility.dump(sorted, count);
        std::cout << std::endl;
    }

    return sorted;
}



#endif // SELECTION_H_INCLUDED
