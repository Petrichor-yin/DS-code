#include <iostream>
#include "headfun.cpp"
using namespace std;

void del(LNode *&L, int min, int max)
{
  LNode *p = L;
  while (p->next != NULL)
  {
    if (p->next->data > min && p->next->data < max)
    {
      LNode *u = p->next;
      p->next = u->next;
      free(u);
    }
    else
      p = p->next;
  }
}

int main()
{
  LNode *L = aaaa();
  del(L, 5, 10);
  LNode *q = L->next;
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}