#include <iostream>
#include "headfun.cpp"
using namespace std;

void del(LNode *&L)
{
  LNode *p = L->next;
  LNode *q;
  if (p == NULL)
    return;
  while (p->next != NULL)
  {
    q = p->next;
    if (p->data == q->data)
    {
      p->next = q->next;
      free(q);
    }
    else
      p = p->next;
  }
}

int main()
{
  LNode *A = aaaa();
  del(A);
  LNode *q = A->next;
  cout << "AÎª£º";
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}