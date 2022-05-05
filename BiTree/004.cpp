#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int getDepth(BTNode *p)
{
  int LD, RD;
  if (p == NULL)
    return 0;
  else
  {
    LD = getDepth(p->lchild);
    RD = getDepth(p->rchild);
    return (LD > RD ? LD : RD) + 1;
  }
}

void getDepth2(BTNode *p, int &n, int &max)
{
  if (p != NULL)
  {
    ++n;
    if (n >= max)
      max = n;
    getDepth2(p->lchild, n, max);
    getDepth2(p->rchild, n, max);
    --n;
  }
}

int main()
{
  BTNode *T = aaaa();
  // int n = getDepth(T);
  int n = 0, max = 1;
  getDepth2(T, n, max);
  cout << "二叉树的深度为:" << max << endl;
}