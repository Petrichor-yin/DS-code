#include <iostream>
#include "headfun.cpp"
using namespace std;

void fun(LNode *&head, int n)
{
  LNode *p = head;
  LNode *r;
  int *q = new int[n + 1];
  int m;
  for (int i = 0; i < n + 1; ++i)
    q[i] = 0;
  while (p->next != NULL)
  {
    if (p->next->data > 0)
      m = p->next->data;
    else
      m = -p->next->data;
    if (q[m] == 0)
    {
      q[m] = 1;
      p = p->next;
    }
    else
    {
      r = p->next;
      p->next = r->next;
      free(r);
    }
  }
  free(q);
}

int main()
{
  LNode *L = aaaa();
  fun(L, 50);
  L = L->next;
  while (L != NULL)
  {
    cout << L->data << " ";
    L = L->next;
  }
}