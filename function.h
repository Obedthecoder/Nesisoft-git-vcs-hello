// declarations of functions used in the program
#ifndef FUNCTION_H 
#define FUNCTION_H 


// declare arithmetic functions
<<<<<<< HEAD
int add(int a, int b);
 
int subtract(int a, int b);

int multiply(int a, int b);

double divide(int a, int b);

int factorial(int n);
  
=======
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
>>>>>>> b6ded27ff1be096607cdb3b3cff852761e34e672
#endif // FUNCTION_H


