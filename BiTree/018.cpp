#include <iostream>
#include "018treefun.cpp"
using namespace std;

void printpath(BTNode *p)
{
  while (p != NULL)
  {
    cout << p->data << " ";
    p = p->parent;
  }
}

void allpath(BTNode *p)
{
  if (p != NULL)
  {
    cout << "·Ö±ðÎª:";
    printpath(p);
    allpath(p->lchild);
    allpath(p->rchild);
  }
}

int main()
{
  BTNode *T, *p = NULL;
  aaaa(T, p);
  allpath(T);
}
