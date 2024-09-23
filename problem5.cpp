#include <iostream>
using namespace std;
int main() {
    double num1, num2, result;
    char op;


    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter sign (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    switch (op) {
        case '+':
            result = num1 + num2;
        break;
        case '-':
            result = num1 - num2;
        break;
        case '*':
            result = num1 * num2;
        break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
        break;
        default:
            cout << "Error: Invalid sign!" << endl;
        return 1;
    }
    cout << "Output: " << result << endl;

    return 0;
}
