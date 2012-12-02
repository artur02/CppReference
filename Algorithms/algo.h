#include <iostream>
#include <limits>

template <typename T>
class Algo
{
    const T* numbers;
protected:
    void DumpArray(const T* numbers, const int count);
    int FindMin(const T* numbers, const int count, int start, int end);
public:
    Algo(const T* numbers, int count);
    virtual T* Sort() = 0;
};

template <typename T>
Algo<T>::Algo(T const* numbers, int count)
{
    this->numbers = numbers;
}

template <typename T>
void Algo<T>::DumpArray(const T* numbers, const int count)
{
    for (int i=0; i<count; i++)
    {
        std::cout << numbers[i] << " " << std::endl;
    }
}

template <typename T>
int Algo<T>::FindMin(const T* numbers, const int count, int start, int end)
{
    int index = -1;
    int minvalue = std::numeric_limits<T>::max();

    for (int i=start; i<=end; i++)
    {
        if(numbers[i]<minvalue)
        {
            index = i;
        }
    }

    return index;
}

