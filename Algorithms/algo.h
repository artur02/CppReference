template <typename T>
class Algo
{
    const T* numbers;
protected:
  void DumpArray(const T* numbers, const int count);
  int FindMin(const T* numbers, const int count, int start, int end);
public:
  Algo(const T* numbers, const int count);
  virtual T* Sort() = 0;
};
