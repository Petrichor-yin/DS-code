#include <iostream>
#include "headfun.cpp"
using namespace std;
//法一标准解
int find(LNode *head, int k)
{
  LNode *q = head->next;
  LNode *p = head;
  int i = 1;
  while (q != NULL)
  {
    q = q->next;
    ++i;
    if (i > k)
      p = p->next;
  }
  if (p == head)
    return 0;
  else
  {
    cout << "倒数第K个节点为：" << p->data;
    return 1;
  }
}

//法二暴力解
int len(LNode *L)
{
  LNode *p = L->next;
  int n = 0;
  while (p != NULL)
  {
    p = p->next;
    ++n;
  }
  return n;
}

int Find(LNode *L, int k)
{
  int i = 0, m;
  m = len(L) - k + 1;
  if (m <= 0)
  {
    return 0;
  }
  while (i < m)
  {
    L = L->next;
    ++i;
  }
  cout << L->data;
  return 1;
}

int main()
{
  LNode *L = aaaa();
  int j = find(L, 3);
}
