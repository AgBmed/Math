#include <stdio.h>

int main() {

    int a = 3;
    int b = 4;
    int resultadd = 0;
    int resultsub = 0;
    int resultmult = 0;
    int resultdiv = 0;
    int resultmod = 0;

    resultadd = a + b;
    resultsub = a - b;
    resultmult = a * b;
    resultdiv = a / b;
    resultmod = a % b;

    printf("Addition of a = %d, and b = %d is: %d \n", a, b, resultadd);
    printf("Subtraction of a = %d, and b = %d is: %d \n", a, b, resultsub);
    printf("Multiplication of a = %d, and b = %d is: %d \n", a, b, resultmult);
    printf("Division of a = %d, and b = %d is: %d \n", a, b, resultdiv);
    printf("Modulus of a = %d, and b = %d is: %d \n", a, b, resultmod);

    return 0;
}


