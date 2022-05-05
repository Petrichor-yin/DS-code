#include <iostream>
#include "BITreefun.cpp"
using namespace std; //填写元素值不要超过10，因为字符型
// p13 03
void Max(BTNode *p, char &max)
{
  if (p != NULL)
  {
    if (p->data > max)
      max = p->data;
    Max(p->lchild, max);
    Max(p->rchild, max);
  }
}
int main()
{
  BTNode *T = aaaa();
  char max = '0';
  Max(T, max);
  cout << "最大值为:" << max << endl;
}