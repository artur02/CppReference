#include <iostream>
#include "Utility.h"
#include "Algorithms\sort\selection.h"
#include "Algorithms\sort\bubble.h"
#include "Algorithms\sort\insertion.hpp"
#include <time.h>

using namespace std;

int* GetNumbers(int* count)
{
    static int original[] = {1, 3, 2, 11, 6, 6, 9, 8, -5, 89};
    *count = sizeof(original)/sizeof(int);
    return original;
}

void RunSelectionSort(int* numbers, int count)
{
    Utility utility;

    cout << "=== Selection sort ===" << endl;
    SelectionSort<int> sorter(numbers, count);
    sorter.Sort();
    cout << "Sorted numbers:" << endl;
    sorter.Dump();
}

void RunInsertionSort(int* numbers, int count)
{
    Utility utility;

    cout << "=== Insertion sort ===" << endl;
    InsertionSort<int> ins(numbers, count);
    ins.Sort();
    cout << "Sorted numbers:" << endl;
    ins.Dump();
}

void RunBubbleSort(int* numbers, int count)
{
    Utility utility;

    cout << "=== Bubble sort ===" << endl;
    BubbleSort<int> bubble(numbers, count);
    bubble.Sort();
    cout << "Sorted numbers:" << endl;
    bubble.Dump();
}

int main()
{
    Utility utility;

    int num_count;
    int* numbers = GetNumbers(&num_count);


    cout << "Original numbers:" << endl;
    utility.dump(numbers, num_count);

    cout << endl << endl;
    delete numbers;
    numbers = GetNumbers(&num_count);
    RunSelectionSort(numbers, num_count);

    cout << endl << endl;
    numbers = GetNumbers(&num_count);
    RunInsertionSort(numbers, num_count);

    cout << endl << endl;
    numbers = GetNumbers(&num_count);
    RunBubbleSort(numbers, num_count);

    return 0;
}
