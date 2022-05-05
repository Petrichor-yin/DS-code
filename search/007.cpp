#include <iostream>
#include "BiTree.cpp"
using namespace std;
void fun(BTNode *T, char key)
{
  if (T != NULL)
  {
    if (T->lchild != NULL)
      fun(T->lchild, key);
    if (T->data > key)
      cout << T->data;
    if (T->rchild != NULL)
      fun(T->rchild, key);
  }
}
int main()
{
  BTNode *T = aaaa();
  char key = '5';
  fun(T, key);
  return 0;
}