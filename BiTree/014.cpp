#include <iostream>
#include "BiTreefun.cpp"
#define maxsize 50
using namespace std;

void allpath(BTNode *p, char pathstack[], int top)
{
  if (p != NULL)
  {
    pathstack[top] = p->data;
    if (!p->lchild && !p->rchild)
      for (int i = 0; i <= top; ++i)
        cout << pathstack[i] << " ";
    cout << endl;
    allpath(p->lchild, pathstack, top + 1);
    allpath(p->rchild, pathstack, top + 1);
  }
}
int main()
{
  int top = 0;
  char pathstack[maxsize];
  BTNode *T = aaaa();
  allpath(T, pathstack, top);
}