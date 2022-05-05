#include <iostream>
#include "stackfun.cpp"
using namespace std;

void fun(string S)
{
  stack s;
  Init(s);
  string newS = "";
  int i = 0, j = 0;
  while (S[i] != '\0')
  {
    if (S[i] == 'H')
      push(s, S[i++]);
    else
      newS[j++] = S[i++];
  }
  while (s.top != -1)
    newS[j++] = pop(s);
  i = 0;
  while (newS[i] != '\0')
    cout << newS[i++];
}

int main()
{
  string S = "HSSHHHS";
  fun(S);
}