#include <iostream>
#include "sqlist.cpp"
using namespace std;

int find(Sqlist L, int x)
{
  int i = 0;
  for (; i < L.length; ++i)
  {
    if (x < L.data[i])
      break;
  }
  return i;
}

void insert(Sqlist &L, int x)
{
  int j, p;
  p = find(L, x);
  for (j = L.length - 1; j >= p; --j)
    L.data[j + 1] = L.data[j];
  L.data[p] = x;
  ++(L.length); //±ğÒÅÂ©
}

int main()
{
  Sqlist L = {{1, 3, 5, 8, 9}, 5};
  insert(L, 6);
  for (int j = 0; j < L.length; ++j)
    cout << L.data[j] << endl;
}