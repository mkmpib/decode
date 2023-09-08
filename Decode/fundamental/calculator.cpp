// C++ program to create calculator using
// switch statement
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    char op;
    cout<<"Enter the oprator that you want to calculate: ";
   
 
    // It allows user to enter operator
    // i.e. +, -, *, /
    cin >> op;
 
    // It allow user to enter the operands
     float num1, num2;
    cout<<"Enter the oprants: ";
    cin >> num1 >> num2;
 
    // Switch statement begins
    switch (op)
    {       
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