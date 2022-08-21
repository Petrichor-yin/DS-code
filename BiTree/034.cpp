#include <iostream>
#include "031.cpp"
using namespace std;

TNode *fun(TNode *T, TNode *p)
{
  if (p->ltag==0){
    while(p->rtag==0)
      p=p->rchild;
    return p;
  }
  else 
    return p->lchild;
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
  cout << "pre is:" << fun(T, p)->data << endl;
  return 0;
}
