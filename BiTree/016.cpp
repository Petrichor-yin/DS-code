#include <iostream>
#include "BITreefun.cpp"
using namespace std;

BiTree create(char A[], char B[], int L1, int R1, int L2, int R2)
{
  BTNode *root = new BTNode;
  root->data = A[L1];
  int i;
  for (i = L2; B[i] != root->data; i++)
    ;
  if (i > L2)
    root->lchild = create(A, B, L1 + 1, i - L2 + L1, L2, i - 1);
  else
    root->lchild = NULL;
  if (i < R2)
    root->rchild = create(A, B, i - L2 + L1 + 1, R1, i + 1, R2);
  else
    root->rchild = NULL;
  return root;
}

void post(BTNode *T)
{
  if (T != NULL)
  {
    post(T->lchild);
    post(T->rchild);
    cout << T->data << " ";
  }
}

int main()
{
  char A[7] = "abcdef";
  char B[7] = "cbdaef";
  BTNode *T = create(A, B, 0, 6, 0, 6);
  post(T);
  return 0;
}