#include <iostream>
#include "algraph.cpp"
using namespace std;
#define maxsize 50
void DFS(AGraph *G, int v, int visit[])
{
  visit[v] = 1;
  // cout << v << " ";
  ArcNode *p = G->adjlist[v].firstarc;
  while (p != NULL)
  {
    if (visit[p->adjvex] == 0)
      DFS(G, p->adjvex, visit);
    p = p->nextarc;
  }
}
int func(AGraph *G)
{
  int visit[maxsize];
  for (int i = 0; i < G->numver; ++i)
    visit[i] = 0;
  int count = 0;
  for (int j = 0; j < G->numver; ++j)
    if (visit[j] == 0)
    {
      DFS(G, j, visit);
      count++;
    }
  return count;
}
int main()
{
  AGraph *G = aaaa(4, 3);
  cout << "¸öÊýÎª£º" << func(G);
  return 0;
}