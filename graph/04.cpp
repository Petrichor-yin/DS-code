#include <iostream>
#include "algraph.cpp"
using namespace std;
// DFS
void DFS(AGraph *G, int v, int visit[])
{
  visit[v] = 1;
  cout << v << " ";
  ArcNode *p = G->adjlist[v].firstarc;
  while (p != NULL)
  {
    if (visit[p->adjvex] == 0)
      DFS(G, p->adjvex, visit);
    p = p->nextarc;
  }
}

int main()
{
  int visit[maxsize];
  AGraph *G = aaaa(4, 4);
  for (int i = 0; i < G->numver; ++i)
    visit[i] = 0;
  DFS(G, 2, visit);
  return 0;
}