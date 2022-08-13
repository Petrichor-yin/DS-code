#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int op(char A, char B, char C)
{
  switch (C)
  {
  case '+':
    return A + B;
    break;
  case '-':
    return A - B;
    break;
  case '*':
    return A * B;
    break;
  case '/':
    return A / B;
    break;
  default:
    break;
  }
  return -100;
}

int comp(BTNode *p)
{
  int A, B;
  if (p == NULL)
    return 0;
  if (p != NULL)
  {
    if (p->lchild != NULL && p->rchild != NULL)
    {
      A = comp(p->lchild);
      B = comp(p->rchild);
      return op(A, B, p->data);
    }
    else
      return p->data - '0';
  }
  return -100;
}

void func(BTNode *p,int deep){
  if(p!=NULL){
    if((p->lchild&&p->rchild)&&deep>=1)
      cout<<'(';
    // deep++;
    func(p->lchild,deep+1);
    cout<<p->data;
    func(p->rchild,deep+1);
    // deep--;
    if((p->lchild&&p->rchild)&&deep>=1)
      cout<<')';
  }
}

int main()
{
  BTNode *T = aaaa();
  int deep=0;
  cout<<"result1:";
  func(T,deep);
  cout<<endl;
  int a = comp(T);
  cout << "result2 : " << a << endl;
}
