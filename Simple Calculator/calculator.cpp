#include <iostream>
using namespace std;
 
int main()
{
    char op;
    float num1, num2;
 
    // It allows user to enter operator
    // i.e. +, -, *, /
    
 
    // It allow user to enter the operands
    cout << endl;
    cout << "Enter the first value: " << endl;
    cin >> num1;
    cout << "Enter The operand which you want to perform to calculate:" << endl;
    cin >> op;
    cout << "Enter the second value: " << endl;
    cin >> num2;

    cout << endl;

    // Switch statement begins
    switch (op) {
    // If user enter +
    case '+':
        cout << num1 + num2;
        break;
 
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
 
    // If user enter *
    case '*':
        cout << num1 * num2;
        break;
 
    // If user enter /
    case '/':
        cout << num1 / num2;
        break;
 
    // If the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
    }
    // switch statement ends
 
    return 0;
}