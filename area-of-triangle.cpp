#include <iostream.h>
#include <conio.h>
#include <math.h>

void main() {
    char ch;
    float base, height, side1, side2, side3, semiperimeter, area;

    cout << "Enter a character (A, B, C): ";
    cin >> ch;

    switch (ch) {
        case 'A':
        case 'a':
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle is " << area;
            break;
        case 'B':
        case 'b':
            cout << "Enter the three sides of the triangle: ";
            cin >> side1 >> side2 >> side3;
            semiperimeter = (side1 + side2 + side3) / 2;
            area = sqrt(semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter - side3));
            cout << "Area of the triangle is " << area;
            break;
        case 'C':
        case 'c':
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of the circle is " << area;
            break;
        default:
            cout << "Invalid character entered";
            break;
    }

    getch();
}
