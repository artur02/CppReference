#include "Utility.h"
#include <iostream>
#include <limits>

using namespace std;

Utility::Utility()
{
    //ctor
}

void Utility::dump(const int* nums, const int count)
{
    for (int i = 0; i<count; i++)
    {
        cerr<< nums[i] << " ";
    }
}

int Utility::findMin(const int* nums, int start, int end)
{
    int min = numeric_limits<int>::max();
    int min_index = -1;

    for(int i = start; i<end; i++)
    {
        if(nums[i]<min)
        {
            min = nums[i];
            min_index = i;
        }
    }

    return min_index;
}
