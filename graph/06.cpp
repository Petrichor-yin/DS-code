#include <iostream>
#include "algraph.cpp"
using namespace std;
void fun(AGraph *G, int v, int &vn, int &en, int visit[])
{
  visit[v] = 1;
  ++vn;
  ArcNode *p = G->adjlist[v].firstarc;
  while (p != NULL)
  {
    ++en;
    if (visit[p->adjvex] == 0)
      fun(G, p->adjvex, vn, en, visit);
    p = p->nextarc;
  }
}
bool GisTree(AGraph *G)
{
  int vn = 0, en = 0;
  int visit[maxsize];
  for (int i = 0; i < G->numver; ++i)
    visit[i] = 0;
  fun(G, 1, vn, en, visit);
  if (vn == G->numver && (G->numver - 1) == en / 2)
    return true;
  else
    return false;
}
int main()
{
  AGraph *G = aaaa(4, 3);
  if (GisTree(G))
    cout << "ÊÇ";
  else
    cout << "·ñ";
  return 0;
}