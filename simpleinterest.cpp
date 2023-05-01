#include <iostream.h>
#include <conio.h>

void main() {
    float principle, rate, time, interest;

    cout << "Enter principle amount: ";
    cin >> principle;

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    interest = (principle * rate * time) / 100;

    cout << "Simple Interest = " << interest;

    getch();
}
