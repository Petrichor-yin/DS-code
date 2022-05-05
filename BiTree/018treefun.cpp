#include <iostream>
using namespace std;
typedef struct BTNode
{
  char data;
  struct BTNode *lchild, *rchild, *parent;
} BTNode, *BiTree;

void aaaa(BTNode *&T, BTNode *p) //这里不可以*&p
{
  char x;
  cin >> x;
  if (x == '#')
    T = NULL;
  else
  {
    T = new BTNode;
    T->data = x;
    T->parent = p;
    p = T;
    T->lchild = NULL;
    T->rchild = NULL;
    aaaa(T->lchild, p);
    aaaa(T->rchild, p);
  }
  return;
}