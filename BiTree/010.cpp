#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void trave(BTNode *p, int k, int &n)
{
  if (p != NULL)
  {
    ++n;
    if (k == n)
    {
      cout << p->data;
      return;
    }
    trave(p->lchild, k, n);
    trave(p->rchild, k, n);
  }
}

int main()
{
  BTNode *T = aaaa();
  int k = 3, n = 0;
  cout << "第n个节点的值为:";
  trave(T, k, n);
}