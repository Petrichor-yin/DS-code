#include <iostream>
#include "stackfun.cpp"
#include "queuefun.cpp"
using namespace std;

void reverse(stack &s, queue &q)
{
  while (q.front != q.rear)
    push(s, dequeue(q));
  while (s.top != -1)
    enqueue(q, pop(s));
}

int main()
{
  stack s;
  Init(s);
  queue q;
  init(q);
  int x;
  cin >> x;
  while (x != -1)
  {
    enqueue(q, x);
    cin >> x;
  }
  reverse(s, q);
  while (q.front != q.rear)
  {
    cout << q.data[q.front] << " ";
    q.front = (q.front + 1) % maxsize;
  }
}
