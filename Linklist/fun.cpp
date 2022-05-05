#include <iostream>
using namespace std;
typedef struct LNode
{
  int data;
  struct LNode *next;
} LNode, *Linklist;

//不带头节点的链表
Linklist aaaa()
{
  LNode *L = new LNode;
  int a;
  cin >> a;
  L->data = a;
  LNode *p = L; //声明一个指针指向头结点，
  //生成链表
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
  p->next = NULL;
  return L;
}
