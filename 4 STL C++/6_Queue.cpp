#include<bits/stdc++.h>
using namespace std;

void explainQueue() {
    // FIFO : ticket counter data structure 
    queue<int> q;
    q.push(2);
    q.push(23);
    q.push(22);
    q.push(24);

    while (q.empty() == false)
    {
        /* code */
        cout << q.front() << " "; // not used top
        q.pop();
        cout << endl;
    }

}

void explainPQ() {
    // store the highest element at the top
    // priority queue is nothing underneath is heap
    priority_queue<char> pq;
    pq.push('s');
    pq.push('b');
    pq.push('a');
    pq.push('q');
// Print the element as highest number of element like 10
    while (pq.empty() == false) {
        cout << pq.top() << " ";
        pq.pop();
        cout << endl;
    }

// if you want to print small char to print first
// minimum heap 
priority_queue<int, vector<int>, greater<int> > smallPQ;
smallPQ.push(10);
smallPQ.push(2);
smallPQ.push(1);
smallPQ.push(11);
smallPQ.push(0);
smallPQ.push(113);

while (smallPQ.empty() == false) {
    cout << smallPQ.top () << " "; // output : 0 1 2 10 11 113
    smallPQ.pop();
    cout << endl; 
}

}
int main() {
    // explainQueue();
    explainPQ();
}