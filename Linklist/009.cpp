#include <iostream>
#include "headfun.cpp"
using namespace std;

void del_min(LNode *&head)
{
  while (head->next != NULL)
  {
    LNode *pre = head;
    LNode *p = head->next;
    while (p->next != NULL)
    {
      if (p->next->data < pre->next->data)
        pre = p;
      p = p->next;
    }
    cout << pre->next->data << " ";
    LNode *u = pre->next;
    pre->next = u->next;
    free(u);
  }
  free(head);
}

int main()
{
  LNode *L = aaaa();
  del_min(L);
  return 0;
}