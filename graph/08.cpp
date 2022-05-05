#include <iostream>
#include "algraph.cpp"
using namespace std;
void DFS1(AGraph *G, int v)
{
  int visit[maxsize];
  for (int i = 0; i < G->numver; ++i)
    visit[i] = 0;
  int stack[maxsize];
  int top = -1;
  cout << v << " ";
  visit[v] = 1;
  stack[++top] = v;
  while (top != -1)
  {
    int k = stack[top];
    ArcNode *p = G->adjlist[k].firstarc;
    while (p != NULL && visit[p->adjvex] == 1)
      p = p->nextarc;
    if (p == NULL)
      --top;
    else
    {
      cout << p->adjvex << " ";
      visit[p->adjvex] = 1;
      stack[++top] = p->adjvex;
    }
  }
}
int main()
{
  AGraph *G = aaaa(4, 4);
  DFS1(G, 2);
  return 0;
}