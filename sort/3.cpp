#include <bits/stdc++.h>
using namespace std;
#define maxsize 50
void shellsort(int arr[], int n)
{
  int temp;
  for (int gap = n / 2; gap > 0; gap /= 2)
  {
    for (int i = gap; i < n; ++i)
    {
      temp = arr[i];
      int j = i;
      while (j >= gap && arr[j - gap] > temp)
      {
        arr[j] = arr[j - gap];
        j -= gap;
      }
      arr[j] = temp;

      cout << endl;
    }
  }
}

int main()
{
  int A[] = {12, 6, 9, 2, 4};
  shellsort(A, 5);
  for (int i = 0; i < 5; i++)
  {
    cout << A[i] << ' ';
  }
  return 0;
}