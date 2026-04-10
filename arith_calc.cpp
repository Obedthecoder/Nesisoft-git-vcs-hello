#include <iostream>
#include "function.h"
using namespace std;


int main () {
    // Prompt the user for two inputs
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the arithmetic operations and display the results
    cout << "Sum:        " << add(num1, num2)      << endl;
    cout << "Difference: " << subtract(num1, num2) << endl;
    cout << "Product:    " << multiply(num1, num2) << endl;
    cout << "Quotient:   " << divide(num1, num2)   << endl;

return 0;

    return 0;
}