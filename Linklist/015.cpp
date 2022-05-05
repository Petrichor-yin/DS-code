#include <iostream>
#include "headfun.cpp"
using namespace std;

Linklist common(LNode *A, LNode *B)
{
  LNode *p = A->next;
  LNode *q = B->next;
  LNode *C = new LNode;
  LNode *r = C, *s;
  while (p != NULL && q != NULL)
  {
    if (p->data < q->data)
      p = p->next;
    else if (p->data > q->data)
      q = q->next;
    else
    {
      s = new LNode;
      s->data = p->data;
      r->next = s;
      r = s;
      p = p->next;
      q = q->next;
    }
  }
  r->next = NULL;
  return C;
}

int main()
{
  cout << "ÊäÈëA:";
  LNode *A = aaaa();
  cout << "ÊäÈëB:";
  LNode *B = aaaa();
  LNode *C = common(A, B);
  LNode *q = C->next;
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}