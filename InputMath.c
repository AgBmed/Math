#include <stdio.h>

int runme() {

    int a, b;
    float result;

    printf("Let's try something new: \n");
    printf("Let's get the average of 2 numbers, please provide me with the first variable: \n");

    scanf("%d", &a);

    printf("Thank you, please give me the second one: \n");

    scanf("%d", &b);

    result = (float)(a + b) / 2;

    printf("Thanks, now through the magic of computers, the average of these 2 points is: %.2f \n", result);

    return 0;
}