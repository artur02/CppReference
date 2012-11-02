#include <iostream>
#include <limits>
#include <utility>

using namespace std;

void dump(const int* nums, const int count)
{
  for (int i = 0; i<count; i++)
  {
    cout<< nums[i] << " ";
  }
}

int findMin(const int* nums, const int count, const int start, const int end)
{

  int min = numeric_limits<int>::max();
  int min_index = numeric_limits<int>::min();

  for(int i = start; i<=end; i++)
  {
    if(nums[i]<min)
    {
      min = nums[i];
      min_index = i;
    }
  }

  //return make_pair<int,int>(min_index, min);
  return min_index;
}

int* sort(const int* nums, const int count)
{
  int* sorted = new int[count];

  for (int i = 0; i<count; i++)
  {
    sorted[i] = nums[i];
  }

  for (int i = 0; i<count; i++)
  {
    int minindex = findMin(sorted, count, i, count-1);
    int temp = sorted[i];
    sorted[i] = sorted[minindex];
    sorted[minindex] = temp;

    dump(sorted, count);
    cout << endl;
  }

  return sorted;
}

int main()
{
  int numbers[] = {1, 3, 2, 11, 6, 6, 9, 8, -5, 89};
  int num_count = sizeof(numbers)/sizeof(int);

  cout << "Original numbers:" << endl;
  dump(numbers, num_count);

  cout << endl << endl;

  int* sorted = sort(numbers, num_count);
  cout << "Sorted numbers:" << endl;
  dump(sorted, num_count);
}
