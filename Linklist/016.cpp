#include <iostream>
#include "headfun.cpp"
using namespace std;

void Union(LNode *&A, LNode *&B)
{
  LNode *p = A->next;
  LNode *q = B->next;
  LNode *ra = A, *u;
  while (p != NULL && q != NULL)
  {
    if (p->data < q->data)
    {
      u = p;
      p = p->next;
      free(u);
    }
    else if (p->data > q->data)
    {
      u = q;
      q = q->next;
      free(u);
    }
    else
    {
      ra->next = p;
      ra = p;
      p = p->next;
      u = q;
      q = q->next;
      free(u);
    }
  }
  while (p != NULL)
  {
    u = p;
    p = p->next;
    free(u);
  }
  while (q != NULL)
  {
    u = q;
    q = q->next;
    free(u);
  }
  ra->next = NULL;
  free(q);
}

int main()
{
  cout << "ÊäÈëA:";
  LNode *A = aaaa();
  cout << "ÊäÈëB:";
  LNode *B = aaaa();
  Union(A, B);
  LNode *q = A->next;
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}