#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< " Enter the value of n : ";
    cin>>n;
    
    for(int i = 10; i >= n; i--){
        cout<< i << " ";
    }
    cout<< endl;

    // int num;

    // for(int i = 1; i<=2; i++){
    //     cin>>num;
    //     cout<<num <<endl;
    // }
    return 0;
}