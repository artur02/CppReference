#include "algo.h"
#include <iostream>
#include <limits>

using namespace std;

template <typename T>
Algo<T>::Algo(const T* numbers, const int count)
{
    this->numbers = numbers;
}

template <typename T>
void Algo<T>::DumpArray(const T* numbers, const int count)
{
  for (int i=0; i<count; i++)
  {
    cout << numbers[i] << " " << endl;
  }
}

template <typename T>
int Algo<T>::FindMin(const T* numbers, const int count, int start, int end)
{
  int index = -1;
  int minvalue = numeric_limits<T>::max();

  for (int i=start; i<=end; i++)
  {
    if(numbers[i]<minvalue)
    {
      index = i;
    }
  }

  return index;
}
