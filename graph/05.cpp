#include <iostream>
#include "algraph.cpp"
using namespace std;
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

bool DFS1(AGraph *G, int i, int j)
{
  int k;
  int visit[maxsize];
  for (k = 0; k < G->numver; ++k)
    visit[k] = 0;
  DFS(G, i, visit);
  if (visit[j] == 1)
    return true;
  else
    return false;
}
int main()
{
  AGraph *G = aaaa(4, 3);
  if (DFS1(G, 0, 2))
    cout << "存在路径";
  else
    cout << "不存在路径";
  return 0;
}