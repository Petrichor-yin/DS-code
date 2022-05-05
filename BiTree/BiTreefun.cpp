#include <iostream>
using namespace std;

typedef struct BTNode
{
  char data;
  struct BTNode *lchild, *rchild;
} BTNode, *BiTree;

BiTree aaaa()
{
  char x;
  cin >> x;
  if (x != '#')
  {
    BTNode *T = new BTNode;
    T->data = x;
    T->lchild = aaaa();
    T->rchild = aaaa();
    return T;
  }
  return NULL;
}

// void aaaa(BTNode *&T)
// {

//   char x;
//   cin >> x;
//   if (x == '#')
//     T = NULL;
//   else
//   {
//     T = new BTNode;
//     T->data = x;
//     T->lchild = NULL;
//     T->rchild = NULL;
//     aaaa(T->lchild);
//     aaaa(T->rchild);
//   }
//   return;
// }
