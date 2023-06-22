/*
 Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.
*/

#include <stdio.h>

struct Complex {
    double real;
    double imaginary;
};
typedef struct Complex c;

void readComplex(c* complex) {
    printf("Enter the real part: ");
    scanf("%lf", &(complex->real));
    
    printf("Enter the imaginary part: ");
    scanf("%lf", &(complex->imaginary));
}

void writeComplex(c complex) {
    if (complex.imaginary >= 0) {
        printf("Complex number: %.2f + %.2fi\n", complex.real, complex.imaginary);
    } else {
        printf("Complex number: %.2f - %.2fi\n", complex.real, -complex.imaginary);
    }
}

c addComplex(c c1, c c2) {
    c result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

c multiplyComplex(c c1, c c2) {
    c result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {

    c complex1, complex2, sum, product;    
    printf("Reading complex number 1:\n");
    readComplex(&complex1);
    printf("Reading complex number 2:\n");
    readComplex(&complex2);
    sum = addComplex(complex1, complex2);
    printf("Sum of two complex numbers:\n");
    writeComplex(sum);
    product = multiplyComplex(complex1, complex2);
    printf("Product of two complex numbers:\n");
    writeComplex(product);
    
    return 0;
}
