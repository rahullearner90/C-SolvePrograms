#include <iostream.h>
#include <conio.h>

void main() {
    int num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: division by zero";
            } else {
                result = num1 / num2;
                cout << "Result: " << result;
            }
            break;
        default:
            cout << "Error: invalid operator";
            break;
    }

    getch();
}
