#include <iostream>
#include "sqlist.cpp"
using namespace std;

void Reverse(Sqlist &L)
{
  int temp, i = 0, j = L.length - 1;
  for (; i < L.length / 2; ++i, --j)
  {
    temp = L.data[i];
    L.data[i] = L.data[j];
    L.data[j] = temp;
  }
}

int main()
{
  Sqlist L = {{12, 3, 5, 8, 9}, 5};
  Reverse(L);
  for (int j = 0; j < L.length; ++j)
    cout << L.data[j] << endl;
}