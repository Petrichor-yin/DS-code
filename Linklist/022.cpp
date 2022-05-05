#include <iostream>
#include "circlesinglefun.cpp"
using namespace std;

void del(LNode *&L)
{
  LNode *p, *minp, *u;
  while (L->next != L)
  {
    p = L->next;
    minp = L;
    while (p->next != L)
    {
      if (p->next->data < minp->next->data)
        minp = p;
      p = p->next;
    }
    cout << "依次输出为：";
    cout << minp->next->data << endl;
    u = minp->next;
    minp->next = u->next;
    free(u);
  }
  free(L);
}

int main()
{
  cout << "输入A链表：";
  LNode *A = aaaa();
  del(A);
  return 0;
}