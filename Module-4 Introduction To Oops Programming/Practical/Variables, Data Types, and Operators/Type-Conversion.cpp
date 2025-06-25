#include <iostream>
using namespace std;

int main() {
    int intValue = 10;
    float floatValue = 5.75;

    // Implicit conversion
    float result1 = intValue + floatValue; 

    // Explicit conversion
    int result2 = intValue + (int)floatValue;

    cout << "Implicit conversion result (int + float): " << result1 << endl;
    cout << "Explicit conversion result (int + (int)float): " << result2 << endl;

    return 0;
}
