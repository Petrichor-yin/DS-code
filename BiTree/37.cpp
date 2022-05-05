#include <iostream>
#include "37tree.cpp"
#include "BiTreefun.cpp"
using namespace std;

void create(CBNode *&T, char e[], int degree[], int n)
{
  CBNode *p = new CBNode[maxsize]; //这里p不是指针而是数组对象
  int i, j, d, k = 0;
  for (i = 0; i < n; ++i)
  {
    p[i].data = e[i];
    p[i].lchild = NULL;
    p[i].rchild = NULL;
  }
  for (i = 0; i < n; ++i)
  {
    d = degree[i];

    if (d)
    {
      p[i].lchild = &p[++k];

      for (j = 2; j <= d; ++j)
      {
        ++k;
        p[k - 1].rchild = &p[k];
      }
    }
  }
  T = p;
}

void pre(CBNode *T)
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
  char e[7] = "123456";
  int degree[6] = {3, 0, 2, 0, 0, 0};
  CBNode *T;
  create(T, e, degree, 6);
  for (int i = 0; i < 6; ++i)
    cout << T[i].data << endl;
  pre(T);
  return 0;
}
