#include <iostream>
#include "Utility.h"
#include "Algorithms\sort\selection.h"
#include "Algorithms\sort\insertion.hpp"
#include <time.h>

using namespace std;

int main()
{
    Utility utility;

    int numbers[] = {1, 3, 2, 11, 6, 6, 9, 8, -5, 89};
    int num_count = sizeof(numbers)/sizeof(int);

    cout << "Original numbers:" << endl;
    utility.dump(numbers, num_count);

    cout << endl << endl;


    cout << "=== Selection sort ===" << endl;
    SelectionSort<int> sorter(numbers, num_count);
    int* sorted = sorter.Sort();
    cout << "Sorted numbers:" << endl;
    utility.dump(sorted, num_count);

    cout << endl << endl;

    cout << "=== Insertion sort ===" << endl;
    InsertionSort<int> ins(numbers, num_count);
    int* inssorted = ins.Sort();
    cout << "Sorted numbers:" << endl;
    utility.dump(inssorted, num_count);




    return 0;
}
