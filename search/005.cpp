#include <iostream>
#include "BiTree.cpp"
using namespace std;
BiTree Min(BTNode *bt)
{
  while (bt->lchild != NULL)
    bt = bt->lchild;
  return bt;
}
BiTree Max(BTNode *bt)
{
  while (bt->rchild != NULL)
    bt = bt->rchild;
  return bt;
}
int main()
{
  BTNode *T = aaaa();
  cout << Min(T)->data << endl;
  cout << Max(T)->data << endl;
  return 0;
}