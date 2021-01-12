#include <iostream>

using namespace std; // Prevents me from having to write "std::" before everything.

// Variables
float Input1;
float Input2;
char Operator;

float Calculator()
{
    // Prints instructions and takes inputs.
    cin >> Input1;
    cin >> Operator;
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
    if (Operator == 'x' || Operator == 'X') // "||" means or.
    {
        return (Input1 * Input2);
    }
}

// Runs the programme and outputs the result.
int main()
{
    float Result;
    while (true)
    {
        Result = Calculator();
        cout << "The answer is: " << Result << endl << endl; 
    }
    
    return 0;
}
