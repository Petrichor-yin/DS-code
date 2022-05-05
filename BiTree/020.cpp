#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonin(BTNode *bt)
{
  BTNode *Stack[maxsize];
  int top = -1;
  while (top != -1 || bt)
  {
    if (bt != NULL)
    {
      Stack[++top] = bt;
      bt = bt->lchild;
    }
    else
    {
      bt = Stack[top--];
      cout << bt->data << " ";
      bt = bt->rchild;
    }
  }
}

int main()
{
  BTNode *T = aaaa();
  Nonin(T);
}