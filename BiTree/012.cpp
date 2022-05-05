#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void del(BTNode *&bt, char key)
{
  if (bt != NULL)
  {
    if (bt->data == key)
    {
      bt = NULL;
      return;
    }
    del(bt->lchild, key);
    del(bt->rchild, key);
    return;
  }
}

void pre(BTNode *T)
{
  if (T != NULL)
  {
    cout << T->data << " ";
    pre(T->lchild);
    pre(T->rchild);
  }
}

int main()
{
  BTNode *T = aaaa();
  del(T, '5');
  pre(T);
  return 0;
}