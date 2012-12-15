#include <iostream>
#include "Utility.h"
#include "Algorithms\sort\selection.h"
#include "Algorithms\sort\bubble.h"
#include "Algorithms\sort\insertion.hpp"
#include <time.h>

using namespace std;

int* FillArray(int* array, int* count)
{
    //array = {1, 3, 2, 11, 6, 6, 9, 8, -5, 89};
    array[0] = 1;
    array[1] = 3;
    array[2] = 4;
    array[3] = 11;
    array[4] = 6;
    array[5] = 6;
    array[6] = 9;
    array[7] = 8;
    array[8] = -5;
    array[9] = 89;

    *count = 10;

    return array;
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
    int numbers[10];
    FillArray(numbers, &num_count);


    cout << "Original numbers:" << endl;
    utility.dump(numbers, num_count);

    cout << endl << endl;
    FillArray(numbers, &num_count);
    RunSelectionSort(numbers, num_count);

    cout << endl << endl;
    FillArray(numbers, &num_count);
    RunInsertionSort(numbers, num_count);

    cout << endl << endl;
    FillArray(numbers, &num_count);
    RunBubbleSort(numbers, num_count);

    return 0;
}
