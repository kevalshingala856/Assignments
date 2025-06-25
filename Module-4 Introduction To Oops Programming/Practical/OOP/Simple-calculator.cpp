#include <iostream>
using namespace std;

class Calculator {
public:
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
};

int main() {
    Calculator calc;
    float num1, num2;
    char op;

    cout << "Enter First Number : ";
    cin >> num1;
 
    cout << "Enter Second number : ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /) : ";
    cin >> op;

    switch (op) {
        case '+': cout << "Addition : " << calc.add(num1, num2); break;
        case '-': cout << "Substration : " << calc.subtract(num1, num2); break;
        case '*': cout << "Multiplication : " << calc.multiply(num1, num2); break;
        case '/': cout << "Division : " << calc.divide(num1, num2); break;
        default: cout << "Invalid operator.";
    }

    return 0;
}
