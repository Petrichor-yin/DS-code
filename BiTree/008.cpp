#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void pre(BTNode *T)
{
  if (T != NULL)
  {
    cout << T->data << " ";
    pre(T->lchild);
    pre(T->rchild);
  }
}

void swap(BTNode *p)
{
  if (p != NULL)
  {
    swap(p->lchild);
    swap(p->rchild);
    BTNode *temp = p->lchild;
    p->lchild = p->rchild;
    p->rchild = temp;
  }
}

int main()
{
  BTNode *T = aaaa();
  cout << "变换前:";
  pre(T);
  swap(T);
  cout << endl
       << "变换后:";
  pre(T);
}