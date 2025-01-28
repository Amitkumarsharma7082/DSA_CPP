#include<iostream>
using namespace std;

int main() {
    /*

    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5
    
    */

   int n;
   cout << "Enter the value of n : " ;
   cin >> n;
   int size = 2 * n - 1;

   for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        int value = n - min(min(i, j), min(size - i - 1, size - j - 1));
        cout << value << " ";
    }
    cout << endl;
   }
   

}