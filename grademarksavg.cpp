#include <iostream.h>
#include <conio.h>

void main() {
    int marks1, marks2, marks3, total;
    float average;
    char grade;

    cout << "Enter marks of subject 1: ";
    cin >> marks1;

    cout << "Enter marks of subject 2: ";
    cin >> marks2;

    cout << "Enter marks of subject 3: ";
    cin >> marks3;

    total = marks1 + marks2 + marks3;
    average = total / 3.0;

    if (average >= 90) {
        grade = 'A';
    }
    else if (average >= 80) {
        grade = 'B';
    }
    else if (average >= 70) {
        grade = 'C';
    }
    else if (average >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;
    cout << "Grade: " << grade;

    getch();
}
