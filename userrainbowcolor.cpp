#include <iostream.h>
#include <conio.h>

void main() {
    char color_code;

    cout << "Enter color code (first letter of color name): ";
    cin >> color_code;

    switch (color_code) {
        case 'r':
        case 'R':
            cout << "Red";
            break;
        case 'o':
        case 'O':
            cout << "Orange";
            break;
        case 'y':
        case 'Y':
            cout << "Yellow";
            break;
        case 'g':
        case 'G':
            cout << "Green";
            break;
        case 'b':
        case 'B':
            cout << "Blue";
            break;
        case 'i':
        case 'I':
            cout << "Indigo";
            break;
        case 'v':
        case 'V':
            cout << "Violet";
            break;
        default:
            cout << "Invalid color code";
            break;
    }

    getch();
}
