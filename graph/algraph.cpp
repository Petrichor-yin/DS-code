#include <iostream>
using namespace std;
#define maxsize 100
typedef struct ArcNode
{
  int adjvex; //边所指向节点的位置
  struct ArcNode *nextarc;
} ArcNode, *Node; //边结点结构体

typedef struct
{
  int data;
  ArcNode *firstarc;
} Vnode; //顶点结构体

typedef struct
{
  Vnode adjlist[maxsize];
  int numver, numedg;
} AGraph; //图

//创建一个无向图
AGraph *aaaa(int v, int e)
{
  AGraph *G = new AGraph;
  G->numver = v;              //顶点数
  G->numedg = e;              //边数
  for (int i = 0; i < v; ++i) //初始化定点表的指针域为空
    G->adjlist[i].firstarc = NULL;
  //建立链表
  for (int i = 0; i < e; ++i)
  {
    cout << "输入:";
    int v1, v2;
    cin >> v1;
    cin >> v2;
    ArcNode *p = new ArcNode; //创建边节点指针
    p->adjvex = v2;           //该边指向的节点
    // 头插法建立
    p->nextarc = G->adjlist[v1].firstarc;
    G->adjlist[v1].firstarc = p;
    //另一条边
    ArcNode *q = new ArcNode; //为新建的边申请空间
    q->adjvex = v1;           //该边指向的节点
    // 头插法建立
    q->nextarc = G->adjlist[v2].firstarc;
    G->adjlist[v2].firstarc = q;
  }
  cout << "完成!" << endl;
  return G;
}