#include <iostream>
#include "2struct.cpp"
using namespace std;
void Init(stack &s) //≥ı ºªØ
{
  s.top[0] = -1;
  s.top[1] = maxsize;
}

bool push(stack &s, int i, int x)
{
  if (i < 0 || i > 1)
    return false;
  if (s.top[1] - s.top[0] == 1)
    return false;
  switch (i)
  {
  case 0:
    s.data[++s.top[0]] = x;
    break;
  case 1:
    s.data[--s.top[1]] = x;
    break;
  }
  return true;
}

int pop(stack &s, int i)
{
  if (i < 0 || i > 1)
    return -1;
  switch (i)
  {
  case 0:
    if (s.top[0] == -1)
      return -1;
    else
      return s.data[s.top[0]--];
    break;
  case 1:
    if (s.top[1] == maxsize)
      return -1;
    else
      return s.data[s.top[1]++];
    break;
  }
  return 0;
}

int main()
{
  stack s;
  Init(s);
  push(s, 0, 15);
  push(s, 0, 13);
  push(s, 1, 10);
  // pop(s, 0);
  cout << s.data[s.top[0]];
  return 0;
}