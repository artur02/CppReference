#include <iostream>
#include <iomanip>
#include <limits>
#include "Utility.h"

template <typename T>
class Algo
{

protected:
    T* numbers;
    int count;
    int FindMin(int start, int end);
public:
    Algo(T* numbers, int count);
    virtual ~Algo();
    virtual T* Sort() = 0;
    virtual void Dump();
};

template <typename T>
Algo<T>::Algo(T* numbers, int count)
    :numbers(numbers),
    count(count)
{ }

template <typename T>
void Algo<T>::Dump()
{
    for (int i=0; i<count; i++)
    {
        std::cerr << std::setw(2) << numbers[i] << " ";
    }
}

template <typename T>
int Algo<T>::FindMin(int start, int end)
{
    int min_index = start;

    for(int i = start; i<end; i++)
    {
        if(numbers[i]<numbers[min_index])
        {
            min_index = i;
        }
    }

    return min_index;
}

template <typename T>
Algo<T>::~Algo(){
}

