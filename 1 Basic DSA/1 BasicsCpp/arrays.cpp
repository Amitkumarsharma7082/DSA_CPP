#include<iostream>
using namespace std;

int main(){
    int num[5] = {5, 2, 1, 3, 7 };

    cout << "Number : " <<num[4] << endl;

    for(int i = 0; i<=4; i++){
        cout << "Number : " <<num[i] << endl;
    }

    return 0;
}