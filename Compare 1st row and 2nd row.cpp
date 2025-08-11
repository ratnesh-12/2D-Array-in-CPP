#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[50][50];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    if (rows >= 2) {
        cout << "\nComparing first row to second row:\n";
        for (int j = 0; j < cols; j++) {
            if (matrix[0][j] == matrix[1][j]) {
                cout << "Column " << j << ": Equal (" << matrix[0][j] << ")\n";
            } else {
                cout << "Column " << j << ": Not Equal (" 
                     << matrix[0][j] << " & " << matrix[1][j] << ")\n";
            }
        }
    } else {
        cout << "Matrix must have at least 2 rows to compare";
    }

    return 0;
}
OUTPUT: 
Enter number of rows: 2
Enter number of columns: 3
Enter matrix elements:
Element [0][0]: 11
Element [0][1]: 22
Element [0][2]: 3
Element [1][0]: 11
Element [1][1]: 22
Element [1][2]: 3

Comparing first row to second row:
Column 0: Equal (11)
Column 1: Equal (22)
Column 2: Equal (3)

=== Code Execution Successful ===
