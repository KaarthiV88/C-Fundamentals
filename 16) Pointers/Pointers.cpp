#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int age = 17;
    double gpa = 5.5;
    string name = "Kaarthi";

    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;
    cout << endl;

    int *pAge = &age;
    double *pGPA = &gpa;
    string *pName = &name;

    cout << "Age: " << pAge << endl;
    cout << "GPA: " << pGPA << endl;
    cout << "Name: " << pName << endl;
// Dereference a pointer by adding '*' to the front of the variable.
// Rereference a pointer by adding '&' to the front of the variable.

}

