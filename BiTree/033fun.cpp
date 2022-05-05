#include <iostream>
using namespace std;

typedef struct TNode
{
  char data;
  struct TNode *lchild, *rchild;
  int ltag = 0, rtag = 0;
} TNode, *iTree;

void preTh(TNode *&p, TNode *&pre)
{
  if (p != NULL)
  {
    if (p->lchild == NULL)
    {
      p->lchild = pre;
      p->ltag = 1;
    }
    if (pre && pre->rchild == NULL)
    {
      pre->rchild = p;
      pre->rtag = 1;
    }
    pre = p;
    if (p->ltag != 1)
      preTh(p->lchild, pre);
    if (p->rtag != 1)
      preTh(p->rchild, pre);
  }
}

iTree aa()
{
  char x;
  cin >> x;
  if (x != '#')
  {
    TNode *T = new TNode;
    T->data = x;
    T->lchild = aa();
    T->rchild = aa();
    return T;
  }
  return NULL;
}
