#include<bits/stdc++.h>
#include<string>
using namespace std;


//! Single Inheritance
// class Person{
// public:
//   string name;
//   int age;

//   // Person(string name, int age) {
//   //   this->name = name;
//   //   this->age = age;
//   // }

//   Person() {
//     cout << "Parent constructor......." << endl;
//   }
//   ~Person() {
//     cout << "Parent deallocate..." << endl;
//   }
// };

// class Student : public Person{
// public:
//   // name, age, rollNumber;
//   int rollNumber;

//   Student() {
//     cout << "Child constructor......." << endl; 
//   }
//   ~Student() {
//       cout << "Child destructor......." << endl;
//   }
//   void getInfo() {
//     cout << "Name : " << name << endl;
//     cout << "Age : " << age << endl;
//     cout << "Roll number : " << rollNumber << endl;
//   }
// };


//! MultiLevel Inheritance
class Person {
public: 
  string name;
  int age;
};

class Student : public Person {
public: 
  int rollNumber;
};

class GradStudent : public Student{
public:
  string researchArea;

  void getInfo() {
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Roll number : " << rollNumber << endl;
    cout << "Research area : " << researchArea << endl;
  }
};

int main() {
  GradStudent s1;
  s1.name = "Rahul";
  s1.researchArea = "Quntam Physics";
  s1.getInfo();
  
}