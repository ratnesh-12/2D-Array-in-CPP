#include <iostream>
using namespace std; 

int main() {
    int rows,cols,i,j;
    
    cout <<"Enter number of rows: ";
    cin >> rows;
    cout <<"Enter number of columns: ";
    cin >> cols;
    
    int m1[20][20];
    cout <<"Enter elements for the matrix:\n";
    for (i=0; i<rows; i++){
        for (j=0; j<cols; j++){
            cout << "Element " << i << " " << j << ": ";
            cin >> m1[i][j];
        }
    }
    cout <<"The matrix is:\n";
    for (i=0; i<rows; ++i){
        for (j=0; j<cols; ++j){
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

OUTPUT:
Enter number of rows: 2
Enter number of columns: 3
Enter elements for the matrix:
Element 0 0: 11
Element 0 1: 22
Element 0 2: 33
Element 1 0: 44
Element 1 1: 55
Element 1 2: 66
The matrix is:
11 22 33 
44 55 66 

=== Code Execution Successful ===
