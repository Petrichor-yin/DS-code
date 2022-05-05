#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void fun(BTNode *p, char x, int L)
{
  if (p != NULL)
  {
    if (p->data == x)
      cout << "7所在的层数为:" << L;
    fun(p->lchild, x, L + 1); //这里不可写L++
    fun(p->rchild, x, L + 1);
  }
}

void fun1(BTNode *p, char x, int L)
{
  if (p != NULL)
  {
    if (p->data == x)
      cout << "7所在的层数为:" << L;
    ++L;
    fun1(p->lchild, x, L);
    fun1(p->rchild, x, L);
    --L;
  }
}

int main()
{
  BTNode *T = aaaa();
  int L = 1;
  fun1(T, '7', L);
}
