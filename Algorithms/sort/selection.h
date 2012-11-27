#ifndef SELECTION_H_INCLUDED
#define SELECTION_H_INCLUDED

template <typename T>
class SelectionSort
{
    const T* numbers;
    int count;
public:
    SelectionSort();
    SelectionSort(const T* numbers, int count);
    T* Sort();
};


#endif // SELECTION_H_INCLUDED
