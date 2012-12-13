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
    : Algo<T>
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
    for (int i = 0; i<Algo<T>::count; i++)
    {
        int minindex = this->FindMin(i, Algo<T>::count);
        T temp = Algo<T>::numbers[i];
        std::cout << std::setw(2) << temp << ": ";
        Algo<T>::numbers[i] = Algo<T>::numbers[minindex];
        Algo<T>::numbers[minindex] = temp;

        this->Dump();
        std::cout << std::endl;
    }

    return Algo<T>::numbers;
}



#endif // SELECTION_H_INCLUDED
