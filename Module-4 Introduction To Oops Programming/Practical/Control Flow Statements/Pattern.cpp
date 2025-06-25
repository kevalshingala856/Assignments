#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {         //row
        for (int j = 1; j <= i; j++) {        //columns
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
