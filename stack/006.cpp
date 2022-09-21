#include <iostream>
using namespace std;
#define maxsize 50

double fun2(int n,double x){
  int top=n-2;
  double st[n];
  double fv1=1;
  double fv2=2*x;
  n=2;
  while(top>=0){
    st[top]=2*x*fv2-2*(n-1)*fv1;
    fv1=fv2;
    fv2=st[top];
    ++n;
    top--;
  }
  if (n == 0)
    return fv1;
  return fv2;
}
int main()
{
  int n=3;
  cout << fun2(n, 3);
  return 0;
}
