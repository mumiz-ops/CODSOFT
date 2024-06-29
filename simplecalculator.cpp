#include <iostream>
using namespace std;
int main() 
{
    double num1, num2;
    char operation;
    double result;
    cout << "Welcome to the Simple Calculator!" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;
    if (operation == '+') 
    {
        result = num1 + num2;
    } 
    else if (operation == '-') 
    {
        result = num1 - num2;
    } 
    else if (operation == '*') 
    {
        result = num1 * num2;
    } 
    else if (operation == '/') 
    {
        if (num2 != 0) 
        {
            result = num1 / num2;
        } 
        else 
        {
            cout << "Error! Division by zero." << endl;
            return 1;
        }
    } 
    else 
    {
        cout << "Invalid operator!" << endl;
        return 1;
    }
    cout << "The result is: " << result << endl;
    return 0;
}