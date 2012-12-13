#include <iostream>
#include "Utility.h"
#include "Algorithms\sort\selection.h"
#include "Algorithms\sort\insertion.hpp"
#include <time.h>

using namespace std;

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

int main()
{
    Utility utility;

    int numbers[] = {1, 3, 2, 11, 6, 6, 9, 8, -5, 89};
    int num_count = sizeof(numbers)/sizeof(int);

    cout << "Original numbers:" << endl;
    utility.dump(numbers, num_count);

    cout << endl << endl;
    RunSelectionSort(numbers, num_count);

    cout << endl << endl;
    RunInsertionSort(numbers, num_count);

    return 0;
}
