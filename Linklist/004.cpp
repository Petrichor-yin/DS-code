#include <iostream>
#include "headfun.cpp"
using namespace std;

void print(LNode *L)
{
  if (L->next != NULL)
    print(L->next);
  cout << L->data << " ";
}

int main()
{
  LNode *L = aaaa();
  print(L->next);
}