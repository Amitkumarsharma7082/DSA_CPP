#include<iostream>
#include<math.h>
using namespace std;

int main() {
    /*
    Question : Print 2^n
    using c++ STL ?
    */

//This code *without* using C++ STL 
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * 2;
    }
    cout << ans << endl;


// This code using C++ STL

int answer = pow(2,n);
cout << "Answer : " << answer << endl;

}