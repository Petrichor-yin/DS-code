#include <iostream>
#include "algraph.cpp"
using namespace std;
int BFS(AGraph *G, int v)
{
  ArcNode *p;
  int j, que[maxsize];
  int front = 0, rear = 0;
  int visit[maxsize];
  for (int i = 0; i < G->numver; ++i)
    visit[i] = 0;
  que[++rear] = v;
  visit[v] = 1;
  while (front != rear)
  {
    j = que[++front];
    p = G->adjlist[j].firstarc;
    while (p != NULL)
    {
      if (visit[p->adjvex] == 0)
      {
        visit[p->adjvex] = 1;
        que[++rear] = p->adjvex;
      }
      p = p->nextarc;
    }
  }
  return j;
}

int main()
{
  AGraph *G = aaaa(4, 4);
  cout << BFS(G, 0);
  return 0;
}