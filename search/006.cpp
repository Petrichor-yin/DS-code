#include <iostream>
#include "BiTree.cpp"
using namespace std;
int level(BTNode *bt, char k)
{
  int n = 1;
  BTNode *t = bt;
  if (bt != NULL)
  {
    while (t->data != k)
    {
      if (t->data < k)
        t = t->rchild;
      else
        t = t->lchild;
      ++n;
    }
  }
  return n;
}
int main()
{
  BTNode *T = aaaa();
  cout << "所在层次为:" << level(T, '4');
  return 0;
}