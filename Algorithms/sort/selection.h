#ifndef SELECTION_H_INCLUDED
#define SELECTION_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <limits>
#include <utility>

#include "../algo.h"
#include "../../Utility.h"

template <typename T>
class SelectionSort
    : public Algo<T>
{
public:
    SelectionSort(T* numbers, int count);
    virtual T* Sort();
};



template <typename T>
SelectionSort<T>::SelectionSort(T* numbers, int count)
    : Algo<T>::Algo(numbers, count)
{}

template <typename T>
T* SelectionSort<T>::Sort()
{
    for (int i = 0; i < this->count; i++)
    {
        int minindex = this->FindMin(i, this->count);
        T temp = this->numbers[i];
        std::cout << std::setw(2) << temp << ": ";
        this->numbers[i] = this->numbers[minindex];
        this->numbers[minindex] = temp;

        this->Dump();
        std::cout << std::endl;
    }

    return this->numbers;
}



#endif // SELECTION_H_INCLUDED
