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

    auto beginItr = vec.begin();
    auto endItr = vec.end();

    for (auto i = beginItr; i < endItr; i++) {
        cout << *i << " ";
    }
    cout << endl;

    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    auto vBeginItr = v.begin();
    auto vEndItr = v.end();

    for (auto j = vBeginItr; j < vEndItr; j++) {
        cout << *j << " ";
    }
    cout << endl;
}

int main() {
    explainVector();
    return 0;
}


/*
 Notes : 

(1) 
  vector<int> :: iterator beginItr = vec.begin();
    vector<int> :: iterator endItr = vec.end();

    for (vector<int> :: iterator i = beginItr; i < endItr; i++) {
        cout << *i << " ";
    }
    cout << endl;


(2)    
    vector<int> :: iterator beginItr = vec.begin();
    auto > vector<int> :: iterator
    beginItr > name of the vector
    vec > vector<int> vec
    begin start from vec[0] element
    end last element vec[n-1] element

*/