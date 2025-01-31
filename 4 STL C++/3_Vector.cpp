#include<bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // vector<int> :: iterator beginItr = vec.begin();
    // vector<int> :: iterator endItr = vec.end();

    // for (vector<int> :: iterator i = beginItr; i < endItr; i++) {
    //     cout << *i << " ";
    // }
    // cout << endl;

    auto beginItr = vec.begin();
    auto endItr = vec.end();

    for (auto i = beginItr; i < endItr; i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int main() {
    explainVector();
    return 0;
}
