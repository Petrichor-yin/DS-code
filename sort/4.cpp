#include <bits/stdc++.h>
using namespace std;
void Bubblesort(int R[], int n)
{
  int i, j, flag, temp;
  for (i = n - 1; i >= 1; --i)
  {
    flag = 0;
    for (j = 1; j <= i; ++j)
      if (R[j - 1] > R[j])
      {
        temp = R[j];
        R[j] = R[j - 1];
        R[j - 1] = temp;
        flag = 1;
      }
    if (flag == 0)
      return;
  }
}

int main()
{
  int A[] = {12, 6, 9, 2, 4};
  Bubblesort(A, 5);
  for (int i = 0; i < 5; i++)
  {
    cout << A[i] << ' ';
  }
  return 0;
}