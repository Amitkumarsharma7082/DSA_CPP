#include<bits/stdc++.h>
using namespace std;

void explainMultiSet() {
    /*
        Multiset : is store all the element in ascending order
        Example 1 : 0 1 1 1 1 2 21 21
        auto it = ms.erase(1); = 0 2 21 21
        auto it = ms.erase(ms.find(1)); = 0 1 1 1 2 21 21 : only one element
        cout << ms.count(1); = 4 (1 1 1 1)

    */


   multiset<int> ms;
   ms.insert(1);
   ms.insert(1);
   ms.insert(1);
   ms.insert(0);
   ms.insert(1);
   ms.insert(21);
   ms.insert(2);
   ms.insert(21);

// if i found (1) > so it point to 1st element in set
// and erase > (1) > all one
// and if one's of one delete > ms.erase(ms.find(1))

   auto it = ms.erase(ms.find(1));
   for (auto it : ms) {
    cout << it << " ";
   }
   cout << endl;

   cout << ms.count(1);
}

int main() {
    explainMultiSet();
}