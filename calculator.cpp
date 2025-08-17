/**
 * @file calculator.cpp
 * @brief A simple calculator program that performs basic arithmetic operations
 * @author [Your Name]
 * @date [Current Date]
 * 
 * This program takes two integers as input and performs the following operations:
 * - Addition (+)
 * - Subtraction (-)
 * - Multiplication (*)
 * - Division (/)
 * - Modulo (%)
 * 
 * The results are displayed in order of operation.
 */

#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the two input numbers
    int a, b;
    
    // Get input from user - two integers separated by space or newline
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    // Perform and display addition
    cout << "Addition: " << a << " + " << b << " = " << a + b << endl;
    
    // Perform and display subtraction
    cout << "Subtraction: " << a << " - " << b << " = " << a - b << endl;
    
    // Perform and display multiplication
    cout << "Multiplication: " << a << " * " << b << " = " << a * b << endl;
    
    // Perform and display division (integer division)
    cout << "Division: " << a << " / " << b << " = " << a / b << endl;
    
    // Perform and display modulo (remainder)
    cout << "Modulo: " << a << " % " << b << " = " << a % b << endl;
    
    return 0; // Indicate successful program completion
}

    