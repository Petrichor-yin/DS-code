#include <iostream>
#include "headfun.cpp"
using namespace std;
Linklist divrev(LNode *&L)
{
  LNode *p = L, *q = L;
  while (q != NULL && q->next != NULL)
  {
    p = p->next;
    q = q->next->next;
  }
  LNode *L1 = new LNode;
  L1->next = p->next;
  p->next = NULL;
  LNode *p1 = L1->next, *r;
  L1->next = NULL;
  while (p1 != NULL)
  {
    r = p1->next;
    p1->next = L1->next;
    L1->next = p1;
    p1 = r;
  }
  return L1;
}

void merge(LNode *&L)
{
  LNode *r, *s;
  LNode *L1 = divrev(L);
  LNode *p = L->next, *q = L1->next;
  L1->next = NULL;
  while (q != NULL)
  {
    r = p->next;
    s = q->next;
    p->next = q;
    q->next = r;
    p = r;
    q = s;
  }
}

int main()
{
  LNode *L = aaaa();
  merge(L);
  L = L->next;
  while (L != NULL)
  {
    cout << L->data << " ";
    L = L->next;
  }
}