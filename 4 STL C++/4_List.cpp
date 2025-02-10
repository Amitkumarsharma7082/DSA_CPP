#include<bits/stdc++.h>
using namespace std;

void explainList() {
    // list is also container
    list<int> ls = {6,7};
    ls.push_front(1); // push the element in front of list

    for (auto it : ls) {
        cout << it << " "; // ouput : 1 6 7 
    }
    cout << endl;
}

int main() {
    explainList();

}

/*

Notes : 
    List is also container
    list<int> ls;
    ls

   1. all of method working same like vector

   2. special method is list is allow to insert as a front

    like :  push_front
*/