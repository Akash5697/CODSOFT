/*                TASK-2
            SIMPLE CALCULATOR
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.       */

#include <iostream>
using namespace std;

int main()
{
    int a, b; // take variables
    char op;
    cout << endl;
    cout << ".................SIMPLE CALCULATOR......................";

    cout << endl;

    cout << "Enter 1st number:- ";
    cin >> a;

    cout << endl;

    cout << "Enter the operation you want to perform :- ";
    cin >> op;

    cout << endl;

    cout << "Enter the 2nd Number:- ";
    cin >> b;

    cout << endl;
    switch (op) // use switch case to perform the operations
    {
    case '+':
        cout << "Addition Value = " << (a + b);   //logic for Addition
        break;
    case '-':
        cout << "Subtraction Value = " << (a - b);  //logic for Subtraction
        break;
    case '*':
        cout << "Multiplication Value = " << (a * b);  //logic for Multiplication
        break;
    case '/':
        cout << "Division Value = " << (a / b);  // logic for Division
        break;

    default:
        cout << "You have enter wrong operation";  //default value statement
        break;
    }
    return 0;
}