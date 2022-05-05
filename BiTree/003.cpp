#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int count(BTNode *p)
{
  int n1, n2;
  if (p == NULL)
    return 0;
  if (p->lchild && p->rchild)
  {
    n1 = count(p->lchild);
    n2 = count(p->rchild);
    return n1 + n2 + 1;
  }
  else
  {
    n1 = count(p->lchild);
    n2 = count(p->rchild);
    return n1 + n2;
  }
}
int main()
{
  BTNode *T = aaaa();
  cout << "¸öÊýÎª:" << count(T);
  return 0;
}