#include <iostream>
#include "linklist.cpp"
using namespace std;

void fun(LNode *&L, int k)
{
  LNode *l = L;
  if (l->next->data == k)
    return;
  while (l->next->next)
    if (l->next->next->data != k)
      l = l->next;
    else
      break;
  if (l->next->next != NULL)
  {
    LNode *p = l->next;
    LNode *q = p->next;
    p->next = q->next;
    l->next = q;
    q->next = p;
  }
}

int main()
{
  LNode *L = aaaa();
  fun(L, 3);
  while (L->next != NULL)
  {
    cout << L->next->data;
    L = L->next;
  }
  return 0;
}