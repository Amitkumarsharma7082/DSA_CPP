#include<bits/stdc++.h>
using namespace std;

void explainMultiMap() {
    multimap<int, char> mpp;
    mpp.insert( {1, 'a'} );
    mpp.insert( {2, 'b'} );
    mpp.insert( {1, 'a'} );
    mpp.insert( {2, 'c'} );
    mpp.insert( {3, 'b'} );
    mpp.insert( {3, 'a'} );
    mpp.insert( {1, 'c'} );

    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // range to print
    auto it = mpp.equal_range(2);
    for (auto i = it.first; i != it.second; i++) {
        cout << (*i).first << " -> "<< (*i).second << endl; 
    }
}

int main() {
    explainMultiMap();
}