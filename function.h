// declarations of functions used in the program
#ifndef FUNCTION_H 
#define FUNCTION_H 


// declare arithmetic functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return a / b;
}

int factorial(int n) {  
     return (n == 0) ? 1 : n * factorial(n - 1);
}
#endif // FUNCTION_H


