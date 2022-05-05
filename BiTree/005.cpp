#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int op(char A, char B, char C)
{
  switch (C)
  {
  case '+':
    return A + B;
    break;
  case '-':
    return A - B;
    break;
  case '*':
    return A * B;
    break;
  case '/':
    return A / B;
    break;
  default:
    break;
  }
  return -100;
}

int comp(BTNode *p)
{
  int A, B;
  if (p == NULL)
    return 0;
  if (p != NULL)
  {
    if (p->lchild != NULL && p->rchild != NULL)
    {
      A = comp(p->lchild);
      B = comp(p->rchild);
      return op(A, B, p->data);
    }
    else
      return p->data - '0';
  }
  return -100;
}

int main()
{
  BTNode *T = aaaa();
  int a = comp(T);
  cout << "Êä³öÎª:" << a << endl;
}