#include <iostream>
using namespace std;
typedef struct DNode
{
  int data;
  struct DNode *next, *prior;
} DNode, *Dinklist;
//Ñ­»·Ë«Á´±í
Dinklist aaaa()
{
  DNode *L = new DNode;
  DNode *p = L;
  int a;
  cin >> a;
  while (a != 0)
  {
    DNode *q = new DNode;
    q->data = a;
    q->next = NULL;
    q->prior = p;
    p->next = q;
    p = p->next;
    cin >> a;
  }
  p->next = L;
  L->prior = p;
  return L;
}
