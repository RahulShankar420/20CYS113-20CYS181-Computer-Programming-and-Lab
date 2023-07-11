#include <stdio.h>
typedef struct complex {
    int real;
    int imag;
} complex;

complex add(complex n1, complex n2);

int main() {
    complex a, b, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%d %d", &a.real, &a.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%d %d", &b.real, &b.imag);

    result = add(a, b);

    printf("Sum = %d + %di", result.real, result.imag);
    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
