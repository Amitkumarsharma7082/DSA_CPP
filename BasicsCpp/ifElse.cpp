#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age < 13) {
        cout << "Child" << endl;
    } else if (age >= 13 && age <= 19) {
        cout << "Teen" << endl;
    } else {
        cout << "Adult" << endl;
    }

    return 0;
}

// if age>=18 is adult or print teen;