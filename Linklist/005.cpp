#include <iostream>
#include "headfun.cpp"
using namespace std;

void reverse(LNode *&L)
{
  LNode *p = L->next, *r;
  L->next = NULL;
  while (p != NULL)
  {
    r = p->next;
    p->next = L->next;
    L->next = p;
    p = r;
  }
}

void Reverse(LNode *&L)
{
  LNode *p = L->next, *r = p->next;
  LNode *pre;
  p->next = NULL;
  while (r != NULL)
  {
    pre = p;
    p = r;
    r = r->next;
    p->next = pre;
  }
  L->next = p;
}

int main()
{
  LNode *L = aaaa();
  Reverse(L);
  LNode *q = L->next;
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}