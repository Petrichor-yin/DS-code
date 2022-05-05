#include <iostream>
#include "algraph.cpp"
using namespace std;
//广度优先(图的层次遍历)
void BFS(AGraph *G, int v, int visit[])
{
  for (int i = 0; i < G->numver; ++i) //若G不是指针则用G.numver
    visit[i] = 0;
  int que[maxsize];
  int front = 0, rear = 0;
  cout << v << " ";
  visit[v] = 1;
  que[++rear] = v;
  while (front != rear)
  {
    int v = que[++front];
    ArcNode *p = G->adjlist[v].firstarc;
    while (p != NULL)
    {
      if (visit[p->adjvex] == 0)
      {
        cout << p->adjvex << " ";
        visit[p->adjvex] = 1;
        que[++rear] = p->adjvex;
      }
      p = p->nextarc;
    }
  }
}

int main()
{
  AGraph *G = aaaa(4, 4); //输入从0开始，例如输入四个节点依次为0，1，2，3
  int visit[maxsize];
  BFS(G, 1, visit);
  return 0;
}