#include<bits/stdc++.h>
using namespace std;

int main() {
  // FIFO
  priority_queue<int> q; // sort TC O(logN) // max to min
  priority_queue<int, vector<int>, greater<int> > pq; // min to max
  pq.push(1);
  pq.push(20);
  pq.push(13);
  pq.push(3);

// swap(q, q1);
  while(!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;
}