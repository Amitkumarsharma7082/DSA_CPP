// #include<iostream>
// #include<math.h>
// /*
// Notes : 1
// using bits/stdc++.h library because it is
// include all library

// */
// // #include<bits/stdc++.h>

// /*
// Notes : 2
// use : using namespace std;
// all the indentifier 

// */
// using namespace std;
// int main(){
//     cout<<"Hello!";
// return 0;
// }







#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;

    if(age>=18){
        cout<<"Adult!"<<endl;
    }
    if(age<18){
        cout<<"Teen"<<endl;
    }

    return 0;
}

// if age>=18 is adult or print teen;