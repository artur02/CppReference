#include <iostream>
#include "Utility.h"
#include "Algorithms\sort\selection.h"

using namespace std;

/*template <typename T>
class SelectionSort
{
    const T* numbers;
    int count;
public:
    SelectionSort(const T* numbers, int count);
    T* Sort();
};

template <typename T>
SelectionSort<T>::SelectionSort(const T* numbers, int count)
    :numbers(numbers),
     count(count)
{

}

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
}*/

int main()
{
    Utility utility;

    int numbers[] = {1, 3, 2, 11, 6, 6, 9, 8, -5, 89};
    int num_count = sizeof(numbers)/sizeof(int);

    cout << "Originatemplate <typename T>l numbers:" << endl;
    utility.dump(numbers, num_count);

    cout << endl << endl;



    //SelectionSort<int> sorter(numbers, num_count);
    SelectionSort<int> sorter;
    int* sorted = sorter.Sort();
    cout << "Sorted numbers:" << endl;
    utility.dump(sorted, num_count);

    return 0;
}
