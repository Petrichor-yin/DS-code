#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void fun(BTNode *p, int deep)
{
  if (p != NULL)
  {
    if ((p->lchild || p->rchild) && deep > 1)
      cout << "(";
    if (p->lchild != NULL)
      fun(p->lchild, deep + 1);
    cout << p->data;
    if (p->rchild != NULL)
      fun(p->rchild, deep + 1);
    if ((p->lchild || p->rchild) && deep > 1)
      cout << ")";
  }
}

void fun2(BTNode *p, int deep)
{
  if (p != NULL)
  {
    if ((p->lchild || p->rchild) && deep > 1)
      cout << "(";
    ++deep;
    if (p->lchild != NULL)
      fun2(p->lchild, deep);
    cout << p->data;
    if (p->rchild != NULL)
      fun2(p->rchild, deep);
    --deep;
    if ((p->lchild || p->rchild) && deep > 1)
      cout << ")";
  }
}

int main()
{
  BTNode *T = aaaa();
  fun2(T, 1);
  return 0;
}
