#include<iostream>
using namespace std;

int main(){
    int day;
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tue";
            break;
        case 3:
            cout<<"Wed";
            break;
        default:
            cout<<"Invalid";
    }
    return 0;
}