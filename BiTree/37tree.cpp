#include <iostream>
using namespace std;
#define maxsize 50
typedef struct CBNode
{
  char data;
  struct CBNode *lchild, *rchild;
} CBNode, *CBTree;
