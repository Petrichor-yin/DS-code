#include <iostream>
#include "linklistfun.cpp"
#include "stackfun.cpp"
using namespace std;

int fun(LNode *L)
{
  int n = 0, j;
  stack s;
  Init(s);
  LNode *p = L->next;
  while (p != NULL)
  {
    ++n;
    p = p->next;
  }
  p = L->next;
  for (j = 0; j < n / 2; ++j)
  {
    push(s, p->data);
    p = p->next;
  }
  if (n % 2 != 0)
    p = p->next;
  while (p != NULL)
  {
    if (pop(s) == p->data)
      p = p->next;
    else
      return 0;
  }
  return 1;
}

int main()
{
  stack s;
  LNode *L = aaaa();
  cout << fun(L) << endl;
  return 0;
}
