#include <iostream.h>
#include <conio.h>

void main() {
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factors of " << num << " are: ";
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    getch();
}
