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

/*
    lower_bound :
        returns an iterator that points to an element
        that is >= number given

        example 1 : 11 this lower_bound check/point to just greater or equal
        number in the stack answer is 12

        example 2 : if we give 214 (this element is not in stack)
        so it is point after the stack like end;
*/ 

    // Example 1 : lower_bound
    auto it = st.lower_bound(11) ; 
    cout << *it << " ";
    cout << endl;

    // Example 2 : lower_bound (element not in stack)
    auto it2 = st.lower_bound(214);
    if(it2 == st.end()) {
        cout << "end" << " " << endl;
    }
     
/*

    Upper_bound :
    that points to > to element

*/

//  Example : upper_bound (11) return (12) and 
// (12) return (21) 

    auto it3 = st.upper_bound(213) ; // point to end iterator
    cout << "it3 : "<<*it << endl;
    if (it3 == st.end()) {
        cout << "end" << " ";
    }
    cout << endl;

}

int main() {
    explainSet();

}




/*

Notes :

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