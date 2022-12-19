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

    printf("Thank you, the area of this rectangle is %.2f \n", rectangle);

    return 0;
}

int AreaOfTriangle() {

    int h, b;
    float triangle;

    printf("Obtaining the area of a triangle: \n");
    printf("Please give me the base\n");
    scanf("%d", &b);
    printf("Thank you, now the height please: \n");
    scanf("%d", &h);

    triangle = (float) ( (h * b) / 2);

    printf("Thank you, the area of this triangle is %.2f \n", triangle);
    return 0;
}

int AreaOfSquare() {

    int c;
    float square;

    printf("Obtaining the area of a square; \n");
    printf("Please give me the side length\n");
    scanf("%d", &c);
    
    square = (float) (c * c);

    printf("Thank you, the area of this square is: %.2f \n", square);
    return 0;
}