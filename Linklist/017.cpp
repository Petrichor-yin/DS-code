#include <iostream>
#include "headfun.cpp"
using namespace std;

int seq(LNode *A, LNode *B)
{
  LNode *p = A->next;
  LNode *pre = p;
  LNode *q = B->next;
  while (p != NULL && q != NULL)
  {
    if (p->data == q->data)
    {
      p = p->next;
      q = q->next;
    }
    else
    {
      pre = pre->next;
      p = pre;
      q = B->next;
    }
  }
  if (q == NULL)
    return 1;
  else
    return 0;
}

int main()
{
  cout << "输入A:";
  LNode *A = aaaa();
  cout << "输入B:";
  LNode *B = aaaa();
  cout << "结果是:" << seq(A, B);
}