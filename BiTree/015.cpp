#include <iostream>
using namespace std;

void change(char pre[], int L1, int R1, char post[], int L2, int R2)
{
  if (L1 <= R1)
  {
    post[R2] = pre[L1];
    change(pre, L1 + 1, (L1 + R1 + 1) / 2, post, L2, (L2 + R2 - 1) / 2);
    change(pre, (L1 + R1 + 1) / 2 + 1, R1, post, (L2 + R2 - 1) / 2 + 1, R2 - 1);
  }
}

int main()
{
  char pre[8] = "abdecfg";
  char post[8] = "";
  change(pre, 0, 6, post, 0, 6);
  int i = 0;
  while (post[i] != '\0')
  {
    cout << post[i];
    ++i;
  }
  return 0;
}