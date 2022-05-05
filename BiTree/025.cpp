#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void level(BTNode *p)
{
  BTNode *stack[maxsize];
  int top = -1;
  int front = 0, rear = 0;
  BTNode *que[maxsize];
  if (p != NULL)
  {
    que[++rear] = p;
    while (front != rear)
    {
      p = que[++front];
      stack[++top] = p;
      if (p->lchild != NULL)
        que[++rear] = p->lchild;
      if (p->rchild != NULL)
        que[++rear] = p->rchild;
    }
  }
  for (int i = top; i > -1; --i)
  {
    cout << stack[i]->data << " ";
  }
}

int main()
{
  BTNode *T = aaaa();
  level(T);
}