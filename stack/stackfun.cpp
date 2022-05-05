#include <iostream>
using namespace std;
#define maxsize 50

typedef struct
{
  char data[maxsize];
  int top;
} stack;

void Init(stack &s) //初始化
{
  s.top = -1;
}

bool push(stack &s, int x) //入栈
{
  if (s.top == maxsize - 1)
    return false;
  s.data[++s.top] = x;
  return true;
}

int pop(stack &s) //出栈
{
  if (s.top == -1)
    return false;
  return s.data[s.top--];
}
