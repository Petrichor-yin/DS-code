#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void link(BTNode *p, BTNode *&head, BTNode *&tail)
{
  if (p != NULL)
  {
    if (!p->lchild && !p->rchild)
    {
      if (head == NULL)
      {
        head = p;
        tail = p;
      }
      else
      {
        tail->rchild = p;
        tail = p;
      }
    }
    link(p->lchild, head, tail);
    link(p->rchild, head, tail);
  }
}

int main()
{
  BTNode *T = aaaa();
  BTNode *head = NULL, *tail = NULL;
  link(T, head, tail);
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->rchild;
  }
}