#include <bits/stdc++.h>
using namespace std;
void sift(int arr[], int low, int high)
{
  int i = low, j = 2 * i + 1;
  int temp = arr[i];
  while (j <= high)
  {
    if (j < high && arr[j] < arr[j + 1])
      ++j;
    if (temp < arr[j])
    {
      arr[i] = arr[j];
      i = j;
      j = 2 * i + 1;
    }
    else
      break;
  }
  arr[i] = temp;
}

void heapSort(int arr[], int n)
{
  for (int i = n / 2 - 1; i >= 0; --i)
    sift(arr, i, n - 1);
  for (int i = n - 1; i > 0; --i)
  {
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;
    sift(arr, 0, i - 1);
  }
}

int main()
{
  int A[] = {12, 6, 9, 2, 4};
  heapSort(A, 5);
  for (int i = 0; i < 5; i++)
  {
    cout << A[i] << ' ';
  }
  return 0;
}