#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonpost(BTNode *bt, char x)
{
  BTNode *St[maxsize], *tag = NULL;
  int top = -1;
  while (bt || top != -1)
  {
    if (bt != NULL)
    {
      St[++top] = bt;
      bt = bt->lchild;
    }
    else
    {
      bt = St[top];
      if (bt->rchild && bt->rchild != tag)
        bt = bt->rchild;
      else
      {
        bt = St[top--];
        if (bt->data == x)
          while (top != -1)
            cout << St[top--]->data << " ";
        tag = bt;
        bt = NULL;
      }
    }
  }
}

int main()
{
  BTNode *T = aaaa();
  Nonpost(T, '5');
}