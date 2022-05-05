#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

BiTree Nonpost(BTNode *bt, BTNode *p, BTNode *q)
{
  BTNode *St[maxsize], *tag = NULL;
  BTNode *s1[maxsize], *s2[maxsize];
  int top = -1, top1 = -1, top2 = -1;
  while (bt || top != -1)
  {
    if (bt != NULL)
    {
      St[++top] = bt;
      bt = bt->lchild;
    }
    else
    {
      bt = St[top];
      if (bt->rchild && bt->rchild != tag)
        bt = bt->rchild;
      else
      {
        bt = St[top--];
        if (bt == p)
        {
          int temp = top;
          while (temp != -1)
            s1[++top1] = St[temp--];
        }
        if (bt == q)
        {
          int temp = top;
          while (temp != -1)
            s2[++top2] = St[temp--];
        }
        tag = bt;
        bt = NULL;
      }
    }
  }
  for (int i = 0; i < top1; ++i)
    for (int j = 0; j < top2; ++j)
      if (s1[i] == s2[j])
        return s1[i];
  return NULL;
}

int main()
{
  BTNode *T = aaaa();
  BTNode *p = T->lchild->lchild;
  BTNode *q = T->lchild->rchild->rchild;
  cout << Nonpost(T, p, q)->data;
  return 0;
}