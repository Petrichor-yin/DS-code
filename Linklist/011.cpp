#include <iostream>
#include "headfun.cpp"
using namespace std;

Linklist create(LNode *&A)
{
  LNode *B = new LNode;
  B->next = NULL;
  LNode *ra = A, *p = A->next, *q;
  A->next = NULL;
  while (p != NULL)
  {
    ra->next = p;
    ra = p;
    p = p->next;
    q = p;
    if (q == NULL)
      break;
    p = p->next;
    q->next = B->next;
    B->next = q;
  }
  ra->next = NULL;
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