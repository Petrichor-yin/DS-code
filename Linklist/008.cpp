#include <iostream>
#include "fun.cpp"
using namespace std;

void del_min(LNode *&L)
{
  LNode *minp = L;
  LNode *p = L->next;
  while (p != NULL)
  {
    if (p->data < minp->data)
      minp = p;
    p = p->next;
  }
  if (L == minp)
  {
    L = L->next;
    free(minp);
    return;
  }
  p = L;
  while (p->next != minp)
    p = p->next;
  p->next = minp->next;
  free(minp);
}

int main()
{
  LNode *L = aaaa();
  del_min(L);
  LNode *q = L;
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}