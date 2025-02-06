#include<bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> vec;
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);

vec.insert(vec.begin() + 2, 4);

    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;


//     vector<int> vec1;
//     vec1.push_back(0);
//     vec1.push_back(3);

// swap(vec, vec1);


    // vec.pop_back(); // last element is pop

    // cout << vec.front() << endl; // front element
    // cout << vec.back() << endl; // back element

// access the element : 
    // cout << "Vector access : " << vec[2] << endl;
    // cout << "Vector access at method : " << vec.at(1) << endl;

    // for (auto i : vec) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // vec.erase(vec.begin() + 1); // vector doesn't have capbility to erase one element

    // for (auto i : vec) {
    //     cout << i << " ";
    // }
    // cout << endl;







    // for (auto i : vec) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // vector<int> duplVec(vec.begin() + 1, vec.end() - 1);
    // for (auto i : duplVec) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // auto reverseBegin = vec.rbegin();
    // auto reverseEnd = vec.rend(); // " " 1,2,0 > point to space

    // for (auto i = reverseBegin; i < reverseEnd; i++) {
    //     cout << *i << " ";
    // }
    // cout << endl;
}

int main() {
    explainVector();
    return 0;
}


/*
Notes : 
1. vector<int> vec(5); > all 5 garbage value print;
2. vector<int> vec(5,8); > all 5 : 8 garbage value print;
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