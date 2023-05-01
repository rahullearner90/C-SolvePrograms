// (1)WAP to Print Even number between 1 to 30 number  (2)WAP to Print Sum of odd number. between 25 to 50 number (3)WAP to accept a number & print fucterial of that number in c++ with old header file

#include <iostream.h>
#include <conio.h>

void main() {
    int i, sum=0, num, fact=1;
    
    // Task 1: Print Even numbers between 1 to 30
    cout << "Even numbers between 1 to 30: ";
    for (i=2; i<=30; i+=2) {
        cout << i << " ";
    }
    cout << endl;
    
    // Task 2: Print Sum of odd numbers between 25 to 50
    cout << "Sum of odd numbers between 25 to 50: ";
    for (i=25; i<=50; i++) {
        if (i%2 != 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    
    // Task 3: Calculate Factorial of a number
    cout << "Enter a number to calculate factorial: ";
    cin >> num;
    for (i=1; i<=num; i++) {
        fact *= i;
    }
    cout << "Factorial of " << num << " is: " << fact << endl;
    
    getch();
}
