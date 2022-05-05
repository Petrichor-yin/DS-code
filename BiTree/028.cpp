#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

bool fun(BTNode *p)
{
  BTNode *q[maxsize];
  int front = 0, rear = 0;
  if (p == NULL)
    return true;
  q[++rear] = p;
  while (front != rear)
  {
    p = q[++front];
    if (p != NULL)
    {
      q[++rear] = p->lchild;
      q[++rear] = p->rchild;
    }
    else
      while (front != rear)
      {
        p = q[++front];
        if (p != NULL)
          return false;
      }
  }
  return true;
}

int main()
{
  BTNode *T = aaaa();
  if (fun(T))
    cout << "是完全二叉树!";
  else
    cout << "不是完全二叉树!";
  return 0;
}
