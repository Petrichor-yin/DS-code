#include <iostream>
#include "headfun.cpp"
using namespace std;

void fun(LNode *&A, LNode *&B)
{
  LNode *p = A->next, *q = B->next;
  LNode *ra = A;
  A->next = NULL;
  B->next = NULL;
  while (p != NULL && q != NULL)
  {
    if (p->data <= q->data)
    {
      ra->next = p;
      p = p->next;
      ra = ra->next;
    }
    else
    {
      ra->next = q;
      q = q->next;
      ra = ra->next;
    }
  }
  if (p != NULL)
    ra->next = p;
  if (q != NULL)
    ra->next = q;
}

int main()
{
  cout << "输入A:";
  LNode *A = aaaa();
  cout << "输入B:";
  LNode *B = aaaa();
  fun(A, B);
  LNode *q = A->next;
  cout << "最终链表为:";
  while (q != NULL)
  {
    cout << q->data << " ";
    q = q->next;
  }
  return 0;
}