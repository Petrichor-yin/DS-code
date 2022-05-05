#include <iostream>
#include "fun.cpp"
using namespace std;

void del_x(LNode *&L, int x)
{
  LNode *p;
  if (L == NULL)
    return;
  if (L->data == x)
  {
    p = L;
    L = L->next;
    free(p);
    del_x(L, x);
  }
  else
    del_x(L->next, x);
}

int main()
{
  LNode *L = aaaa();
  del_x(L, 10);
  while (L != NULL)
  {
    cout << L->data << " ";
    L = L->next;
  }
  return 0;
}
