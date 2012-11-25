#include <iostream>
#include <limits>
#include <utility>

#include "../algo.h"
#include "selection.h"
#include "../../Utility.h"

using namespace std;

SelectionSort::SelectionSort(const int* numbers, int count)
    :numbers(numbers),
     count(count)
{

}

int* SelectionSort::Sort()
{
    Utility utility;

    int* sorted = new int[count];
    for (int i = 0; i<count; i++)
    {
      sorted[i] = numbers[i];
    }

    for (int i = 0; i<count; i++)
    {
        int minindex = utility.findMin(sorted, count, i, count);
        int temp = sorted[i];
        sorted[i] = sorted[minindex];
        sorted[minindex] = temp;

        utility.dump(sorted, count);
        cout << endl;
    }

    return sorted;
}
