#include<bits/stdc++.h>
using namespace std;

void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(7);
    st.push(71);
    st.push(73);
    st.push(17);
    st.push(27);

/* In this stack we have only two element like 1 & 7
last element 7 so when we top() show 7

 */
    // cout << st.top() << endl; // the last in 7
    // st.pop(); // delete 7 from stack
    // cout << st.top() << endl; // when pop/delete 7 and top print 1
    // st.pop(); // delete 1 also
    // cout << st.top() << endl; // runtime error because in this stack zero element



/*
does the stack have something
st.empty() : are you empty 
st.empty() == false : ensures the loop continues as long as the container is not empty.
loop jab takk chale jab container empty na ho 
*/

    while(st.empty() == false) {
        cout << st.top() << " ";
        st.pop();
        cout << endl;
    }

}

int main() {
    explainStack();
}