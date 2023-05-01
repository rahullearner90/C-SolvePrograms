#include <iostream.h>
#include <conio.h>

void main() {
    int num1, num2, num3, max;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    cout << "The maximum number is " << max;

    getch();
}
