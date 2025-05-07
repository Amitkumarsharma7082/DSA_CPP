#include<bits/stdc++.h>
using namespace std;

int main() {
  // FIFO
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
queue<int> q1;
swap(q, q1);
  while(!q1.empty()) {
    cout << q1.front() << " ";
    q1.pop();
  }
  cout << endl;
}