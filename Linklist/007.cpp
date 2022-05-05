#include <iostream>
#include "headfun.cpp"
using namespace std;

void del_min(LNode *&L)
{
  LNode *p = L->next;
  LNode *minp = L;
  while (p->next != NULL)
  {
    if (p->next->data < minp->next->data)
      minp = p;
    p = p->next;
  }
  LNode *u = new LNode;
  u = minp->next;
  minp->next = u->next;
  free(u);
}

int main()
{
  LNode *L = aaaa();
  del_min(L);
  LNode *q = L->next;
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}