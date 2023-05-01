// wap to accept mark of 3 students and calculate total average in c++

#include <iostream.h>
#include <conio.h>

void main() {
    int marks1, marks2, marks3, total;
    float average;
    
    cout << "Enter marks of student 1: ";
    cin >> marks1;
    
    cout << "Enter marks of student 2: ";
    cin >> marks2;
    
    cout << "Enter marks of student 3: ";
    cin >> marks3;
    
    total = marks1 + marks2 + marks3;
    average = total / 3.0;
    
    cout << "Total marks: " << total 
    cout << "Average marks: " << average 
    
}
