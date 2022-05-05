#include <iostream>
using namespace std;
#define maxsize 100

typedef struct
{
  int data[maxsize];
  int length;
} Sqlist;

void search(Sqlist &L, int x)
{
  int low = 0, high = L.length - 1, mid, temp, i;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (L.data[mid] == x)
      break;
    else if (L.data[mid] > x)
      high = mid - 1;
    else
      low = mid + 1;
  }
  if (L.data[mid] == x && mid != L.length - 1)
  {
    temp = L.data[mid];
    L.data[mid] = L.data[mid + 1];
    L.data[mid + 1] = temp;
  }
  if (low > high)
  {
    for (i = L.length - 1; i > high; --i)
      L.data[i + 1] = L.data[i];
    L.data[i + 1] = x;
    L.length++;
  }
}

int main()
{
  Sqlist A = {{2, 5, 9, 13, 19}, 5};
  search(A, 6);
  for (int j = 0; j < A.length; ++j)
    cout << A.data[j] << endl;
}