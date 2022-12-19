#include <stdio.h>

int AreaOfRectangle() {

    int x, y;
    float rectangle;

    printf("Obtaining the area of a rectangle: \n");
    printf("Please give me the length\n");
    scanf("%d", &x);
    printf("Thank you, now the height please: \n");
    scanf("%d", &y);

    rectangle = (float) (x * y);

    printf("Thank you, the area of this rectangle is %.2f", rectangle);

    return 0;
}

int AreaOfTriangle() {

    return 0;
}