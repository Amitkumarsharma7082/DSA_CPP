// // // #include<iostream>
// // // using namespace std;

// // // // void print(){
// // // //     cout<<"I am writing something........"<<endl;
// // // // }

// // // // int main(){
// // // //     print();

// // // //     return 0;
// // // // }

// // // void inputTwoNumbersAndPrint(){
// // //     int num1, num2;
// // //     cin >> num1 >> num2;

// // //     cout << num1 + num2 << endl;
// // // }
// // // int sumOfTwoNumbers(int num1, int num2){
// // //     int sum = num1 + num2;
// // //     return sum;
// // // }

// // // int main(){
// // //     inputTwoNumbersAndPrint();
// // //     inputTwoNumbersAndPrint();
// // //     cout<< "Sum : " << sumOfTwoNumbers(3, 4);
// // //     return 0;
// // // }

// // #include<iostream>
// // using namespace std;

// // void printNumber(int number){
// //     cout << number << endl;
// // }
 
// // int main(){
// //     int input;
// //     cin >> input;

// //     printNumber(input);

// //     return 0;
// // }

// #include<iostream>
// using namespace std;


//     void whichWeekDay(int day) {
        
//         switch(day){
//             case 1: 
//                 cout<<"Monday";
//                 break;
//             case 2: 
//                 cout<<"Tuesday";
//                 break;
//             case 3: 
//                 cout<<"Wednesday";
//                 break;
//             case 4: 
//                 cout<<"Thursday";
//                 break;
//             case 5: 
//                 cout<<"Friday";
//                 break;
//             case 6: 
//                 cout<<"Saturday";
//                 break;
//             case 7: 
//                 cout<<"Sunday";
//                 break;
//             default:
//                 cout<<"Invalid";
//         }
//     }
// int main(){
//     int day;
//     cin>>day;
//     whichWeekDay(day);
// }

// Given two integers X and N, print the value X on the screen N times. 
// Move to the next line after printing, even if N = 0.

#include<iostream>
using namespace std;

void printX(int X, int N){
    //Base Case
    if (N < 0) {
            cout << "Invalid number of times" << endl;
            return;
        }

        // Loop to print the value X, N times
        for (int i = 0; i < N; ++i) {
            // Print the value X
            cout << X;
            
            /* Print a space between numbers,
            but not after the last one */
            if (i < N - 1) {
                cout << " ";
            }
        }
        
        // Move to the next line after printing
        cout << endl;
    
}

int main(){
    int X;
    int N;
    cin >> X;
    cin >> N;

    printX(X, N);
    return 0;
}

















