#ifndef BUBBLE_H_INCLUDED
#define BUBBLE_H_INCLUDED

#include <iostream>
#include <iomanip>

#include "../../Utility.h"

template <typename T>
class BubbleSort
    : public Algo<T>
{
public:
    BubbleSort(T* numbers, int count);
    virtual T* Sort();
};

template <typename T>
BubbleSort<T>::BubbleSort(T* numbers, int count)
    : Algo<T>::Algo(numbers, count)
{

}

template <typename T>
T* BubbleSort<T>::Sort()
{
    int n = this->count;
    bool swapped = false;
    do {
        swapped = false;
        for (int i=1; i<n; i++)
        {
            if (this->numbers[i-1] > this->numbers[i])
            {
                T temp = this->numbers[i-1];
                this->numbers[i-1] = this->numbers[i];
                this->numbers[i] = temp;

                swapped = true;

            }

            this->Dump();
            std::cout << std::endl;
        }

        n -= 1;
    } while (swapped);
}

#endif // BUBBLE_H_INCLUDED
