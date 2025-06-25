#include <iostream>
using namespace std;

int main() {
    int mat1[2][2], mat2[2][2], sum[2][2];

    cout << "Enter elements for first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements for second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> mat2[i][j];
        }
    }

    // Adding matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Display result
    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
