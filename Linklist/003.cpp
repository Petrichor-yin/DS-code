#include <iostream>
#include "headfun.cpp"
using namespace std;

int finddelete(LNode *&C, int x)
{
  LNode *p, *q;
  p = C;
  while (p->next != NULL)
  {
    if (p->next->data == x)
      break;
    p = p->next;
  }
  if (p->next == NULL)
    return 0;
  else
  {
    q = p->next;
    p->next = q->next;
    free(q);
    return 1;
  }
}

int main()
{
  LNode *L = aaaa();
  finddelete(L, 10);
  LNode *q = L->next;
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}