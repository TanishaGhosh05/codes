#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2, result;

    cout << "MENU\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Modulus\n";

    cout << "Enter your choice: ";
    cin >> choice;

    while (choice < 1 || choice > 5) {
        cout << "Invalid choice. Please enter a number between 1 and 5: ";
        cin >> choice;
    }

    cout << "Enter your two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Modulus by zero is not allowed.\n";
            }
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}