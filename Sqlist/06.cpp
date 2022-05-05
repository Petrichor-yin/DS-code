#include <iostream>
#include "sqlist.cpp"
using namespace std;

bool del(Sqlist &L, int s, int t)
{
  int i, k = 0;
  if (L.length == 0 || s >= t)
    return false;
  for (i = 0; i < L.length; ++i)
  {
    if (L.data[i] >= s && L.data[i] <= t)
      ++k;
    else
      L.data[i - k] = L.data[i];
  }
  L.length -= k;
  return true;
}

int main()
{
  Sqlist L = {{12, 13, 15, 18, 9}, 5};
  del(L, 13, 19);
  for (int j = 0; j < L.length; ++j)
    cout << L.data[j] << endl;
}