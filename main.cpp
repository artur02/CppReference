#include <iostream>
#include "Utility.h"
#include "Algorithms\sort\selection.h"

using namespace std;

int main()
{
    Utility utility;

    int numbers[] = {1, 3, 2, 11, 6, 6, 9, 8, -5, 89};
    int num_count = sizeof(numbers)/sizeof(int);

    cout << "Originatemplate <typename T>l numbers:" << endl;
    utility.dump(numbers, num_count);

    cout << endl << endl;



    SelectionSort<int> sorter(numbers, num_count);
    int* sorted = sorter.Sort();
    cout << "Sorted numbers:" << endl;
    utility.dump(sorted, num_count);

    return 0;
}
