#include <iostream>
#include "circledoublefun.cpp"
using namespace std;

int fun(DNode *L)
{
  DNode *p = L->next;
  DNode *q = L->prior;
  while (p != q && q->next != p)
    if (p->data == q->data)
    {
      p = p->next;
      q = q->prior;
    }
    else
      return 0;
  return 1;
}

int main()
{
  DNode *A = aaaa();

  cout << fun(A) << endl;
  return 0;
}