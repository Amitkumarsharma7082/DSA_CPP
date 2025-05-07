#include<bits/stdc++.h>
using namespace std;

int main() {
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  stack<int> st1;
  swap(st, st1);
  while(!st1.empty()) {
      cout << st1.top() << " ";
      st1.pop();
  }
  cout << endl;

}