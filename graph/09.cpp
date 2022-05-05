#include <iostream>
#include "algraph.cpp"
using namespace std;
void findpath(AGraph *G, int u, int v, int path[], int d, int visit[])
{
  int w, i;
  path[++d] = u;
  visit[u] = 1;
  if (u == v)
  {
    cout << endl;
    for (int i = 0; i <= d; ++i)
      cout << path[i] << " ";
  }
  ArcNode *p = G->adjlist[u].firstarc;
  while (p != NULL)
  {
    w = p->adjvex;
    if (visit[w] == 0)
      findpath(G, w, v, path, d, visit);
    p = p->nextarc;
  }
  visit[u] = 0;
}

int main()
{
  AGraph *G = aaaa(4, 5);
  int visit[maxsize];
  for (int i = 0; i < G->numver; ++i)
    visit[i] = 0;
  int path[maxsize];
  findpath(G, 0, 3, path, -1, visit);
  return 0;
}