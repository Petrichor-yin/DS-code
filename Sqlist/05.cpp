#include <iostream>
#include "sqlist.cpp"
using namespace std;

void del(Sqlist &L, int x)
{
  int k = 0;
  for (int i = 0; i <= L.length - 1; ++i)
    if (L.data[i] != x)
    {
      L.data[k] = L.data[i];
      ++k;
    }
  L.length = k;
} //法一

void Del(Sqlist &L, int x)
{
  int k = 0;
  for (int i = 0; i <= L.length - 1; ++i)
  {
    if (L.data[i] == x)
      ++k;
    else
      L.data[i - k] = L.data[i];
  }
  L.length = L.length - k;
} //法二

int main()
{
  Sqlist L = {{12, 3, 5, 8, 9, 3}, 6};
  del(L, 3);
  for (int j = 0; j < L.length; ++j)
    cout << L.data[j] << endl;
}
