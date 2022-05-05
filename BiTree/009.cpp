#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void fun(BTNode *p, BTNode *&q, int key)
{
  if (p != NULL)
  {
    if (p->data == key)
      q = p;
    else
    {
      fun(p->lchild, q, key);
      fun(p->rchild, q, key);
    }
  }
}

int main()
{
  BTNode *T = aaaa();
  BTNode *q = NULL;
  char key = '6';
  fun(T, q, key);
  if (q != NULL)
    cout << "q存在为:" << q->data;
  else
    cout << "不存在!" << endl;
}