#include <iostream>
#include "BITreefun.cpp"
using namespace std;
// p13 04
BiTree create(char A[], int i, int n)
{
  BTNode *t;
  if (i < n)
  {
    t = new BTNode;
    t->data = A[i];
    t->lchild = create(A, 2 * i + 1, n);
    t->rchild = create(A, 2 * i + 2, n);
    return t;
  }
  return NULL;
}
void pre(BTNode *T)
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
  char A[] = "abcde";
  BTNode *T = create(A, 0, 6);
  pre(T);
  return 0;
}