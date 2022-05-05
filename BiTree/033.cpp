#include <iostream>
#include "033fun.cpp"
using namespace std;

TNode *Next(TNode *p)
{
  if (p->ltag != 1)
    return p->lchild;
  return p->rchild;
}

void qq(TNode *p)
{
  for (TNode *q = p; q != NULL; q = Next(q))
    cout << q->data << " ";
}

int main()
{
  TNode *T = aa();
  TNode *pre = NULL;
  if (T != NULL)
  {
    preTh(T, pre);
    pre->rchild = NULL;
    pre->rtag = 1;
  }
  qq(T);
  return 0;
}