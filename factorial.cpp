#include <iostream.h>
#include <conio.h>

void main() {
    int num, i, fact = 1;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    cout << "Factorial of " << num << " is " << fact;

    getch();
}
