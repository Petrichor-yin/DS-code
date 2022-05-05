#include <iostream>
#include "headfun.cpp"
using namespace std;

Linklist create(LNode *&A)
{
  LNode *B = new LNode;
  B->next = NULL;
  LNode *ra = A, *rb = B, *p = A->next;
  A->next = NULL;
  while (p != NULL)
  {
    ra->next = p;
    ra = p;
    p = p->next;
    rb->next = p;
    rb = p;
    p = p->next;
  }
  ra->next = NULL;
  rb->next = NULL;
  return B;
}

int main()
{
  LNode *A = aaaa();
  LNode *B = create(A);
  LNode *q = A->next;
  LNode *p = B->next;
  cout << "AÎª£º";
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  cout << "BÎª£º";
  while (p != NULL)
  {
    cout << p->data << " ";
    p = p->next;
  }
  return 0;
}