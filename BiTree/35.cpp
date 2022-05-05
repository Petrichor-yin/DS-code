#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int fun(BTNode *p)
{
  if (p == NULL)
    return 0;
  if (p->lchild == NULL)
    return fun(p->rchild) + 1;
  return fun(p->lchild) + fun(p->rchild);
}
int main()
{
  BTNode *T = aaaa();
  cout << "叶子节点个数为:" << fun(T);
  return 0;
}
