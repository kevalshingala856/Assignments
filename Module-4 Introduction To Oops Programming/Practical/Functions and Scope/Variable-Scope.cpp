#include <iostream>
using namespace std;

int globalVar = 100;  // Global variable

void displayLocalScope() {
    int globalVar = 50;  // Local variable with same name
    cout << "Inside function (local): globalVar = " << globalVar << endl;
}

void displayGlobalScope() {
    cout << "Inside function (accessing global): globalVar = " << ::globalVar << endl; // Using scope resolution
}

int main() {
    int globalVar = 25;  // Another local variable
    cout << "In main (local): globalVar = " << globalVar << endl;

    displayLocalScope();
    displayGlobalScope();

    return 0;
}
