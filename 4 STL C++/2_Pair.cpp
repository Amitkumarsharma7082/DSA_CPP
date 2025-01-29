#include<bits/stdc++.h>
using namespace std;

void explainPair() {
     pair<int, int> pt1 = make_pair(2, 8);
    // pair<int, int> pt1(10, 20);
    cout << "Pair 1 : " << pt1.first << " and Pair 2 : " << pt1.second << endl;

    pair<int, char> pt2 = make_pair(2, 'b');
    cout << "Pair 1 : " << pt2.first << " and Pair 2 : " << pt2.second << endl;

    // pair<pair<int, char>, int> pt3 = make_pair((2, 'a'), 5);
    // cout << "Pair 1 : " << pt3.first << endl;
}

int main() {
    explainPair();
}

