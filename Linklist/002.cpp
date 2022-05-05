#include <iostream>
#include "headfun.cpp"
using namespace std;

void del(LNode *&L, int x)
{
  LNode *p = L->next, *pre = L;
  LNode *q;
  while (p != NULL)
  {
    if (p->data == x)
    {
      q = p;
      pre->next = p->next;
      p = p->next;
      free(q);
    }
    else
    {
      pre = p;
      p = p->next;
    }
  }
}

void Del(LNode *&L, int x)
{
  LNode *p = L;
  while (p->next != NULL)
  {
    if (p->next->data == x)
    {
      LNode *q = p->next;
      p->next = q->next;
      free(q);
    }
    else
      p = p->next;
  }
}

int main()
{
  LNode *L = aaaa();
  Del(L, 10);
  LNode *q = L->next;
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}
