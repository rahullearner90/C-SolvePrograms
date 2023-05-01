#include <iostream.h>
#include <conio.h>

void main() {
    int num1, num2, temp;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping, first number = " << num1 << endl;
    cout << "After swapping, second number = " << num2;

    getch();
}
