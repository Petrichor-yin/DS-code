#include <iostream>
using namespace std;

void change(char pre[], int L1, int R1, char post[], int L2, int R2)
{
  if (L1 <= R1 && L2 <= R2)
  {
    post[R2] = pre[L1];
    change(pre, L1 + 1, (L1 + R1 + 1) / 2, post, L2, (L2 + R2 - 1) / 2);
    change(pre, (L1 + R1 + 1) / 2 + 1, R1, post, (L2 + R2 - 1) / 2 + 1, R2 - 1);
  }
}//先->后

void change1(char post[], int L1, int R1, char pre[], int L2, int R2)
{
  if (L1 <= R1 && L2 <= R2)
  {
    pre[L2] = post[R1];
    change1(post, L1, (L1 + R1 - 1) / 2, pre, L2 + 1, (L2 + R2 + 1) / 2);
    change1(post, (L1 + R1 - 1) / 2 + 1, R1 - 1, pre, (L2 + R2 + 1) / 2 + 1, R2);
  }
}//后->先

void change2(char pre[], int L1, int R1, char mid[], int L2, int R2)
{
  if (L1 <= R1 && L2 <= R2)
  {
    mid[(L2+R2)/2] = pre[L1];
    change2(pre, L1+1, (L1 + R1 +1) / 2, mid, L2 , (L2 + R2) / 2-1);
    change2(pre, (L1 + R1 +1) / 2 + 1, R1 , mid, (L2 + R2 + 1) / 2 + 1, R2);
  }
}//先->中






// int main()
// {
//   char pre[8] = "abdecfg";
//   char post[8] = "";
//   change(pre, 0, 6, post, 0, 6);
//   int i = 0;
//   while (post[i] != '\0')
//   {
//     cout << post[i];
//     ++i;
//   }
//   return 0;
// }
// int main()
// {
//   char post[8] = "debfgca";
//   char pre[8] = "";
//   change1(post, 0, 6, pre, 0, 6);
//   int i = 0;
//   while (pre[i] != '\0')
//   {
//     cout << pre[i];
//     ++i;
//   }
//   return 0;
// }
int main()
{
  char pre[8] = "abdecfg";
  char mid[8] = "";
  change2(pre, 0, 6, mid, 0, 6);
  int i = 0;
  while (mid[i] != '\0')
  {
    cout << mid[i];
    ++i;
  }
  return 0;
}
