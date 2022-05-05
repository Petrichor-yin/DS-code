#include <iostream>
#include "mgraph.cpp"
using namespace std;
// 2021 408’ÊÃ‚
int IsExistEL(mgraph G)
{
  int degree, i, j, count = 0;
  for (i = 0; i < G.numver; ++i)
  {
    degree = 0;
    for (j = 0; j < G.numver; ++j)
      degree += G.Edge[i][j];
    if (degree % 2 != 0)
      count++;
  }
  if (count == 0 || count == 2)
    return 1;
  else
    return 0;
}

int main()
{
  mgraph M = aaaa();
  if (IsExistEL(M))
    cout << " «!";
  else
    cout << "∑Ò!";
  return 0;
}