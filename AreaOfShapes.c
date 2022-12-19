#include <stdio.h>

int AreaOfShapes() {

    int x, y;
    float rectangle;

    printf("Moving on to a new project: obtaining the area of certain shapes\n");
    printf("Starting with rectangle: \n");
    printf("Please give me the length of the rectangle \n");
    scanf("%d", &x);
    printf("Thank you, now the height please: \n");
    scanf("%d", &y);

    rectangle = (float) (x * y);

    printf("Thank you, the area of this rectangle is %.2f", rectangle);

    return 0;
}