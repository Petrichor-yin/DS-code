#include <iostream>
using namespace std;
#include "sqlist.cpp"
int binsearch(Sqlist L, int key)
{
  int low = 0, high = L.length - 1, mid;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (L.data[mid] == key)
      return mid ;
    else if (L.data[mid] < key)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}

int bi(Sqlist L, int key, int low, int high)
{
  if (low > high)
    return -1;
  int mid = (low + high) / 2;
  if (L.data[mid] < key)
    bi(L, key, mid + 1, high);
  else if (L.data[mid] > key)
    bi(L, key, low, mid - 1);
  else
    return mid;
}
int main()
{
  Sqlist L = {{1, 3, 5, 8, 9}, 5};
  cout << "result is:" << bi(L, 8, 0, 4);
  return 0;
}
