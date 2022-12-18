#include <stdio.h>

int main() {

    int a = 3;
    int b = 4;
    _Bool c = 1;
    _Bool d = 0;
    int e = 5;
    int f = 2;

    int resultadd = 0;
    int resultsub = 0;
    int resultmult = 0;
    int resultdiv = 0;
    int resultmod = 0;
    _Bool resultor;
    _Bool resultand;
    _Bool resultnot;
    int runme(void);

    resultadd = a + b;
    resultsub = a - b;
    resultmult = a * b;
    resultdiv = a / b;
    resultmod = a % b;
    resultor = c || d;
    resultand = c && d;
    resultnot = !(c || d);
    f += e;

    printf("Addition of a = %d, and b = %d is: %d \n", a, b, resultadd);
    printf("Subtraction of a = %d, and b = %d is: %d \n", a, b, resultsub);
    printf("Multiplication of a = %d, and b = %d is: %d \n", a, b, resultmult);
    printf("Division of a = %d, and b = %d is: %d \n", a, b, resultdiv);
    printf("Modulus of a = %d, and b = %d is: %d \n", a, b, resultmod);

    printf("Running a++ on variable a: %d \n", a++);
    printf("Running ++a on variable a: %d \n", ++a);
    printf("Same rules apply with -- as the above ++ rules \n");

    printf("C being = %d, and D being = %d, through OR = %d \n", c, d, resultor);
    printf("C being = %d, and D being = %d, through AND = %d \n", c, d, resultand);
    printf("C being = %d, and D being = %d, through NOT after OR = %d \n", c, d, resultnot);

    printf("E being = %d, and F being = 2, applying f += e we get = %d \n", e, f);

    runme();
    
    return 0;
}


