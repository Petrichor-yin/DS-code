#include <iostream>
#include "sqlist.cpp"
using namespace std;

int Del_Min(Sqlist &L)
{
  int min = L.data[0];
  int pos = 0;
  for (int i = 0; i < L.length; ++i)
    if (L.data[i] < min)
    {
      min = L.data[i];
      pos = i;
    }
  L.data[pos] = L.data[L.length - 1];
  L.length--;
  return min;
}

int main()
{
  Sqlist L = {{12, 3, 5, 8, 9}, 5};
  int min = Del_Min(L);
  for (int j = 0; j < L.length; ++j)
    cout << L.data[j] << endl;
  cout << "最小值为：" << min << endl;
}