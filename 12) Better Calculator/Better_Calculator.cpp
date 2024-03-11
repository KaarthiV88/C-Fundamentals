#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int operation;
    double num1, num2;

    cout << "Enter your operation: \n1. Addition(+) \n2. Subtraction(-) \n3. Multiplication(*) \n4. Division(/) \n5. Exponents(*) \n";
    cin >> operation;

    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;

    if(operation == 1){
        cout << num1 + num2;
    }
    else if(operation == 2){
        cout << num1 - num2;
    }
    else if(operation == 3){
        cout << num1 * num2;
    }
    else if(operation == 4){
        cout << num1 / num2;
    }

    else if(operation == 5){
        cout << pow(num1, num2);
    }
    else{
        cout << "That is an invalid choice :/";
    }




}
