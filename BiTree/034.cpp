#include <iostream>
#include "031.cpp"
using namespace std;

TNode *fun(TNode *T, TNode *p)
{
  TNode *q;
  if (p->rtag == 0)
    q = p->rchild;
  else if (p->ltag == 0)
    q = p->lchild;
  else if (p->lchild == NULL)
    q = NULL;
  else
  {
    while (p->ltag == 1 && p->lchild != NULL)
      p = p->lchild;
    if (p->ltag == 0)
      q = p->lchild;
    else
      q = NULL;
  }
  return q;
}

int main()
{
  TNode *T = aa();
  TNode *p = T->rchild->lchild;
  TNode *pre = NULL;
  if (T != NULL)
  {
    InTh(T, pre);
    pre->rchild = NULL;
    pre->rtag = 1;
  }
  cout << "前驱节点为:" << fun(T, p)->data << endl;
  return 0;
}
