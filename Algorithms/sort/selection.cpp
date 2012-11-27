#include <iostream>
#include <limits>
#include <utility>

#include "../algo.h"
#include "selection.h"
#include "../../Utility.h"

using namespace std;

template <typename T>
SelectionSort<T>::SelectionSort(const T* numbers, int count)
    :numbers(numbers),
     count(count)
{

}

template <typename T>
SelectionSort<T>::SelectionSort()
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
        int minindex = utility.findMin(sorted, count, i, count);
        T temp = sorted[i];
        sorted[i] = sorted[minindex];
        sorted[minindex] = temp;

        utility.dump(sorted, count);
        cout << endl;
    }

    return sorted;
}
