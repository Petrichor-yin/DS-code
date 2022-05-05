#include <bits/stdc++.h>
using namespace std;

int part(int A[], int low, int high)
{
  int pivot = A[low];
  while (low < high)
  {
    while (low < high && A[high] >= pivot)
      --high;
    A[low] = A[high];
    while (low < high && A[low] <= pivot)
      ++low;
    A[high] = A[low];
  }
  A[low] = pivot;
  return low;
}

void Quicksort(int A[], int low, int high)
{
  if (low < high)
  {
    int pivotpos = part(A, low, high);
    Quicksort(A, low, pivotpos - 1);
    Quicksort(A, pivotpos + 1, high);
  }
}

int main()
{
  int A[] = {12, 6, 9, 2, 4};
  Quicksort(A, 0, 4);
  for (int i = 0; i < 5; i++)
  {
    cout << A[i] << ' ';
  }
  return 0;
}