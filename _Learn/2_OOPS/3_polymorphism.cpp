#include<bits/stdc++.h>
#include<string>
using namespace std;


//! Complie Time
//Constructor Overloading : Example Polymorphism (multiple + forms)
// class Student {
// public:
//   string name;

//   Student() {
//     cout << "This is non-parameterized..." << endl;
//   }

//   Student(string name) {
//     this->name = name;
//     cout << "Parameterized..." << endl;
//   }
// };


//! Function overloading.....

class Print {
public:
  void show(int x) {
    cout << "int : " << x << endl;
  }

  void show(char ch) {
    cout << "char : " << ch << endl;
  }
};

int main() {
  Print p1;
  p1.show(5);
  
}