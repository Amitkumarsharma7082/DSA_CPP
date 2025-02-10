#include<bits/stdc++.h>
using namespace std;

void explainSet() {
    // set is only that store unique element
    // and in ascending order

     set<int> st;
     st.insert(2);
     st.insert(12);
     st.insert(21);
     st.insert(211);
     st.insert(213);

     // print all element
     for (auto it : st) {
        cout << it << " ";
     }
     cout << endl;


     // erase mid element : it1, it2

// this method is for : st.begin() + 1 [go to 0,1,2,3,4 : 1 element]
    auto it1 = st.begin();
    it1++;
// this method is for : st.end() - 1 [go to 0,1,2,3,4 : 4 element]
    auto it2 = st.end();
    it2--;

// range
    st.erase(it1, it2); // st.begin() + 1, st.end() - 1 [error]

    // print after erase element

    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    

}

int main() {
    explainSet();

}




/*

Notes :
  while (st.empty() == false) {
        cout << st.top() << " ";
        st.pop();
        cout << endl;
     }

    cout << "Element is store : " ;
    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    auto it = st.find(21);
    if(it != st.end()) {
        cout << *it;
    }



    count means if element is there or not:
    cout << st.count(21) << endl;

    erase the element
    st.erase(21);
    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    auto it = st.end();
    it--;
    st.erase(it);
    for (auto i : st) {
        cout << it << " ";
    }
*/