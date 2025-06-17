#include<bits/stdc++.h>
#include<string>
using namespace std;

//! Classes
class Teacher{
private:
  double salary;

public :
  string name;
  string dept;
  string subject;
    

  void changeDept(string newDept) {
    dept = newDept;
  }

  // Constructor (non-parameterized)
public:
  Teacher() {
    cout << "Hi i am constructor" << endl;
  }

  // Constructor (parameterized)
  Teacher(string name, string dept, string subject, double salary) {
    this->name = name;
    this->dept = dept;
    this->subject = subject;
    this->salary = salary;
  }

  // access the private
  //Setter
  void setSalary(double s) {
    salary = s;
  }
  // getter
  double getSalary() {
    return salary;
  }
  void getInfo() {
    cout << "name : " << name << endl;
    cout << "subject : " << subject << endl;
  }
};

int main() {
  //! Objects
  Teacher t1("Abc", "Computer Science", "C++", 250001); // automatically constructor(complier)
  t1.getInfo();
  // t1.name = "Abc";
  // t1.dept = "Computer Engineering";
  // t1.subject = "DSA";
  // t1.setSalary(250000);

  cout << t1.getSalary() << endl; // showing private error
}