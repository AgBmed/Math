#include <stdio.h>

int average() {

    int h, k;
    float result;

    printf("Let's try something new: \n");
    printf("Let's get the average of 2 numbers, please provide me with the first variable: \n");
    scanf("%d", &h);

    printf("Thank you, please give me the second one: \n");

    scanf("%d", &k);

    result = (float)(h + k) / 2;

    printf("Thanks, now through the magic of computers, the average of these 2 points is: %.2f \n", result);

    return 0;
}