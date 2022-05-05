#include <iostream>
#include "sqlist.cpp"
using namespace std;

bool del(Sqlist &L)
{
  int i, j;
  for (i = 0, j = 1; j < L.length; ++j)
    if (L.data[i] != L.data[j])
      L.data[++i] = L.data[j];
  L.length = i + 1;
  return true;
}

int main()
{
  Sqlist L = {{12, 13, 13, 13, 19}, 5};
  del(L);
  for (int j = 0; j < L.length; ++j)
    cout << L.data[j] << endl;
}