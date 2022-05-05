#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonpre(BTNode *bt) //出栈时访问
{
  BTNode *Stack[maxsize];
  int top = -1;
  if (bt != NULL)
  {
    Stack[++top] = bt;
    while (top != -1)
    {
      bt = Stack[top--];
      cout << bt->data;
      if (bt->rchild != NULL)
        Stack[++top] = bt->rchild;
      if (bt->lchild != NULL)
        Stack[++top] = bt->lchild;
    }
  }
}

void Nonpre2(BTNode *bt) //入栈时访问
{
  BTNode *Stack[maxsize];
  int top = -1;
  while (bt || top != -1)
  {
    if (bt != NULL)
    {
      cout << bt->data;
      Stack[++top] = bt;
      bt = bt->lchild;
    }
    else
    {
      bt = Stack[top--];
      bt = bt->rchild;
    }
  }
}

int main()
{
  BTNode *T = aaaa();
  Nonpre2(T);
  return 0;
}
