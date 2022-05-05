#include <iostream>
using namespace std;
#define maxsize 50
struct stack
{
  int no;
  double val;
} st[maxsize];

double fun(int n, double x)
{
  int top = -1, i;
  double fv1 = 1, fv2 = 2 * x;
  for (i = n; i >= 2; i--)
  {
    top++;
    st[top].no = i;
  }
  while (top >= 0)
  {
    st[top].val = 2 * x * fv2 - 2 * (st[top].no - 1) * fv1;
    fv1 = fv2;
    fv2 = st[top].val;
    top--;
  }
  if (n == 0)
    return fv1;
  return fv2;
}
int main()
{
  cout << fun(2, 2);
}