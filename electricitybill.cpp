#include <iostream.h>
#include <conio.h>

void main() {
    float units, bill;
    float rate1 = 0.50, rate2 = 0.75, rate3 = 1.20, rate4 = 1.50;
    float subcharge = 0.20;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 50) {
        bill = units * rate1;
    }
    else if (units <= 150) {
        bill = 50 * rate1 + (units - 50) * rate2;
    }
    else if (units <= 250) {
        bill = 50 * rate1 + 100 * rate2 + (units - 150) * rate3;
    }
    else {
        bill = 50 * rate1 + 100 * rate2 + 100 * rate3 + (units - 250) * rate4;
    }

    bill = bill + bill * subcharge;

    cout << "Electricity bill: " << bill;

    getch();
}
