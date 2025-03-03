#include<iostream>
using namespace std;

// int x > copy the value
// int &x > reference the value
// but in case of array like change the value arr[0] = 10 to arr[0] = 100
// in case of array it is change in memory location 
// int *arr[] > take the meory address
// but you want to send a copy it is not possible (through manually)
void explainPassByValueAndRefernece(int &x){
    x = x + 10;
}

int main(){
    int num = 5;
    explainPassByValueAndRefernece(num);
    cout << num << endl;

    return 0;
}