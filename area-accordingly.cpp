#include <stdio.h>
#include <conio.h>

void main() {
    char ch;
    int x, radius, length, breadth, height, base, area;

    printf("Enter 'C' for Circle\n");
    printf("Enter 'R' for Rectangle\n");
    printf("Enter 'T' for Triangle\n");
    printf("Enter 'S' for Square\n");
    printf("Enter your choice: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'C':
        case 'c':
            printf("Enter Radius: ");
            scanf("%d", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle: %d", area);
            break;
        case 'R':
        case 'r':
            printf("Enter Length & Breadth: ");
            scanf("%d %d", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle: %d", area);
            break;
        case 'T':
        case 't':
            printf("Enter Base & Height: ");
            scanf("%d %d", &base, &height);
            area = (base * height) / 2;
            printf("Area of Triangle: %d", area);
            break;
        case 'S':
        case 's':
            printf("Enter Side: ");
            scanf("%d", &x);
            area = x * x;
            printf("Area of Square: %d", area);
            break;
        default:
            printf("Enter Correct Option");
            break;
    }
    getch();
}
