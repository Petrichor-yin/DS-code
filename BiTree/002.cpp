#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int count(BTNode *p)
{
  int n1, n2;
  if (p == NULL)
    return 0;
  else if (p->lchild == NULL && p->rchild == NULL)
    return 1;
  else
  {
    n1 = count(p->lchild);
    n2 = count(p->rchild);
    return n1 + n2;
  }
}

void count2(BTNode *p, int &n)
{
  if (p != NULL)
  {
    if (p->lchild == NULL && p->rchild == NULL)
      ++n;
    count2(p->lchild, n);
    count2(p->rchild, n);
  }
}

int main()
{
  BTNode *T = aaaa();
  int n = count(T);
  // int n = 0;
  // count(T, n);
  cout << "叶子结点个数为:" << n << endl;
}