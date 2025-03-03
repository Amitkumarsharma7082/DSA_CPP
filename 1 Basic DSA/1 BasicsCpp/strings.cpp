#include<iostream>
using namespace std;

int main(){
    string str = "tufplus" ;
    int len = str.size();
    // cout<<"Size : " << str.size()<<endl;
    // cout<<str[1]<<endl;
    // cout<<str;



/*
    why i use len-1
    because in the string/array size is like: 7
    but it start from 0
    so thats why 0,1,2,3,4,5,6 = total (7)
    but start from 0 to 6
*/
    for(int i = 0; i<=len-1; i++){
        cout<<i<<" ";
        // cout<<endl;
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}