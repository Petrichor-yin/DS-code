#include <iostream>
using namespace std;

int find(int A[], int n)
{
  int i;
  int *B = new int[n];
  for (int k = 0; k < n; ++k)
    B[k] = 0;
  for (i = 0; i < n; ++i)
    if (A[i] > 0 && A[i] <= n)
      B[A[i] - 1] = 1;
  for (i = 0; i < n; ++i)
    if (B[i] == 0)
      break;
  delete[] B;
  return i + 1;
}

int main()
{
  int A[5] = {5, -2, 1, 4, 5};
  cout << find(A, 5) << endl;
}