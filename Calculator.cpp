#include <iostream>

using namespace std; // Prevents me from having to write "std::" before everything.

// Variables
float Input1;
float Input2;
char Operator;

float Calculator()
{
    // Prints instructions and takes inputs.
    cout << "\n";
    cin >> Input1;
    //cout << "Enter the operator you wish to use. E.g. +, x, - \n";
    cin >> Operator;
    //cout << "Enter a number. \n";
    cin >> Input2;

    // Checks which operator to use.
    if (Operator == '+')
    {
        return (Input1 + Input2);
    }
    if (Operator == '-')
    {
        return (Input1 - Input2);
    }
    if (Operator == '/')
    {
        return (Input1 / Input2);
    }
    if (Operator == '*')
    {
        return (Input1 * Input2);
    }
}

// Runs the programme and outputs the result.
int main()
{
    float Result;
    Result = Calculator();
    cout << "The answer is: " << Result;

    return 0;
}
