#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int i, j, k;
    cout << "Enter rows for Matrix 1: ";
    cin >> r1;
    cout << "Enter columns for Matrix 1: ";
    cin >> c1;
    cout << "Enter rows for Matrix 2: ";
    cin >> r2;
    cout << "Enter columns for Matrix 2: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Columns of Matrix 1 must be equal rows of Matrix 2.\n";
        return 1;
    }
    int M1[20][20], M2[20][20], M3[20][20];
    cout << "Enter elements for Matrix 1:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cout << "Matrix1  " << i << " " << j << ": ";
            cin >> M1[i][j];
        }
    }
    cout << "Enter elements for Matrix 2:\n";
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cout << "Matrix2 " << i << " " << j << ": ";
            cin >> M2[i][j];
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            M3[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
    }    }
    cout << "Multiplication Matrix of M1 & M2:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << M3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
OUTPUT:
Enter rows for Matrix 1: 2
Enter columns for Matrix 1: 3
Enter rows for Matrix 2: 3
Enter columns for Matrix 2: 2
Enter elements for Matrix 1:
Matrix1  0 0: 11
Matrix1  0 1: 22
Matrix1  0 2: 33
Matrix1  1 0: 44
Matrix1  1 1: 55
Matrix1  1 2: 66
Enter elements for Matrix 2:
Matrix2 0 0: 77
Matrix2 0 1: 88
Matrix2 1 0: 99
Matrix2 1 1: 10
Matrix2 2 0: 20
Matrix2 2 1: 30
Multiplication Matrix of M1 & M2:
3685 2178 
10153 6402 

=== Code Execution Successful ===
