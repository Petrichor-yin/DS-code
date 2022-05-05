#include <iostream>
#include "BiTree.cpp"
using namespace std;
void fun(BTNode *bt, int &balance, int &h)
{
  int bl = 0, br = 0, hl = 0, hr = 0;
  if (bt == NULL)
  {
    h = 0;
    balance = 1;
  }
  else if (!bt->lchild && !bt->rchild)
  {
    h = 1;
    balance = 1;
  }
  else
  {
    fun(bt->lchild, bl, hl);
    fun(bt->rchild, br, hr);
    h = (hl > hr ? hl : hr) + 1; //≤ªø…»•µÙ£°
    if (abs(hl - hr) < 2)
      balance = bl && br;
    else
      balance = 0;
  }
}
int main()
{
  BTNode *T = aaaa();
  int balance = 0, h = 0;
  fun(T, balance, h);
  cout << balance;
  return 0;
}