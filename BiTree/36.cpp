#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
//孩子兄弟表示法求树的深度
void fun(BTNode *T, int n, int &max)
{
  if (max < n)
    max = n;
  if (T->lchild != NULL)
    fun(T->lchild, n + 1, max);
  if (T->rchild != NULL)
    fun(T->rchild, n, max);
}
int main()
{
  int n = 1;
  int max = 0;
  BTNode *T = aaaa();
  fun(T, n, max);
  cout << max << endl;
}