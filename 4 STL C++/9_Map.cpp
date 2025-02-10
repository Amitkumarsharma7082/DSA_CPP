#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    map<int, string> mpp;
    mpp[1] = "abc";
    mpp[2] = "def";
    mpp[3] = "Raj";
    

    // Print : use first and second
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // find : functionality
    auto it = mpp.find(3);
    // pointing to complete location 
    cout << (*it).first << " -> " << (*it).second << endl;

}

void explainUnorderedMap() {
    unordered_map<int, string> mpp;
    mpp[1] = "abc";
    mpp[2] = "def";
    mpp[3] = "Raj";
    

    // Print : use first and second
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // find : functionality
    // auto it = mpp.find(3);
    // // pointing to complete location 
    // cout << (*it).first << " -> " << (*it).second << endl;

}
int main() {
    // explainMap();
    explainUnorderedMap();
    return 0;
}
