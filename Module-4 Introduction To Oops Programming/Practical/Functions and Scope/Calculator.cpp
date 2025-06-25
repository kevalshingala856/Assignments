#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cerr << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    float num1, num2;
    char op;

    cout << "Enter First Number : ";
    cin >> num1;

    cout << "Enter Second Number : ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /) : ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Addition : " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Substration : " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Multiplication : " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Division : " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
