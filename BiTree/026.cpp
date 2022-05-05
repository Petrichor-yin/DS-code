#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50
//法一
void LevelWidth(BiTree T, int a[], int h)
{
  if (T != NULL)
  {
    a[h] += 1;
    LevelWidth(T->lchild, a, h + 1);
    LevelWidth(T->rchild, a, h + 1);
  }
}

int width(BiTree T)
{
  int a[maxsize], h = 1;
  for (int i = 0; i <= maxsize; i++)
    a[i] = 0;
  LevelWidth(T, a, h);
  int wid = a[0];
  for (int i = 1; i <= maxsize; i++)
    if (a[i] > wid)
      wid = a[i];
  return wid;
}

//法二
typedef struct
{
  BTNode *p;
  int lno;
} St[maxsize];

int width2(BTNode *boot)
{
  St que;
  int front = 0, rear = 0;
  int Lno, i = 1, max = 0;
  if (boot != NULL)
  {
    que[++rear].p = boot;
    que[rear].lno = 1;
    while (front != rear)
    {
      BTNode *q = que[++front].p;
      Lno = que[front].lno;
      if (q->lchild != NULL)
      {
        que[++rear].p = q->lchild;
        que[rear].lno = Lno + 1;
      }
      if (q->rchild != NULL)
      {
        que[++rear].p = q->rchild;
        que[rear].lno = Lno + 1;
      }
    }
    while (i <= rear)
    {
      int n = 0;
      int k = que[i].lno;
      while (i <= rear && que[i].lno == k)
      {
        ++i;
        ++n;
      }
      if (n > max)
        max = n;
    }
  }
  return max;
}

int main()
{
  BTNode *T = aaaa();
  cout << "最大宽度为:" << width2(T) << endl;
}
