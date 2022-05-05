#include <bits/stdc++.h>
#include "linklist.cpp"
using namespace std;
#define maxsize 50
void InsertSort(int R[], int n)
{
  int i, j, temp;
  for (i = 2; i <= n; ++i)
  {
    R[0] = R[i];
    for (j = i - 1; R[0] < R[j]; --j)
      R[j + 1] = R[j];
    R[j + 1] = R[0];
  }
} //Ë³Ðò´æ´¢

void linksort(LNode *&L)
{
  LNode *p = L->next;
  LNode *r = p->next;
  p->next = NULL;
  p = r;
  while (p != NULL)
  {
    r = p->next;
    LNode *pre = L;
    while (pre->next != NULL &&
           pre->next->data < p->data)
      pre = pre->next;
    p->next = pre->next;
    pre->next = p;
    p = r;
  }
} //Á´Ê½´æ´¢

// int main()
// {
//   int R[] = {-1, 8, 3, 6, 15, 2};
//   InsertSort(R, 5);
//   for (int i = 1; i < 6; i++)
//   {
//     cout << R[i] << ' ';
//   }
//   return 0;
// }

int main()
{
  LNode *head = aaaa();
  linksort(head);
  LNode *p = head->next;
  while (p != NULL)
  {
    cout << p->data << " ";
    p = p->next;
  }
  return 0;
}
