#include <iostream>
using namespace std;

typedef struct LNode
{
  int data;
  struct LNode *next;
} LNode, *Linklist;
//Ñ­»·µ¥Á´±í
Linklist aaaa()
{
  LNode *L = new LNode;
  LNode *p = L;
  int a;
  cin >> a;
  while (a != 0)
  {
    LNode *q = new LNode;
    q->data = a;
    q->next = NULL;
    p->next = q;
    p = p->next;
    cin >> a;
  }
  p->next = L;
  return L;
}