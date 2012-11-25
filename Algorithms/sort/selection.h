#ifndef SELECTION_H_INCLUDED
#define SELECTION_H_INCLUDED

class SelectionSort
{
    const int* numbers;
    int count;
public:
    SelectionSort(const int* numbers, int count);
    int* Sort();
};


#endif // SELECTION_H_INCLUDED
