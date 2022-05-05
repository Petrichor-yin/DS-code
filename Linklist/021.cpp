#include <iostream>
#include "circlesinglefun.cpp"
using namespace std;

void link(LNode *&h1, LNode *&h2)
{
  LNode *p, *q;
  p = h1, q = h2;
  while (p->next != h1)
    p = p->next;
  while (q->next != h2)
    q = q->next;
  p->next = h2;
  q->next = h1;
}

int main()
{
  LNode *A = aaaa();
  LNode *B = aaaa();
  link(A, B);
  LNode *q = A->next;
  while (q != A)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}