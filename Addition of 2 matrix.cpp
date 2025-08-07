#include <iostream>
using namespace std;

int main() {
    int r1,r2,c1,c2;
    cout << "Enter number of rows of 1st matrix:";
    cin >> r1;
    cout << "Enter number of columns of 1st matrix:";
    cin >> c1;
    cout << "Enter number of rows of 2nd matrix:";
    cin >> r2;
    cout << "Enter number of columns of 2nd matrix:";
    cin >> c2;
    
    int m1[50][50],m2[50][50],result[50][50];
    
    
    if(c1==r2){
        for(int i = 0; i<r1 ; i++){
            for(int j = 0; j<c1 ; j++){
                cout << "Element {" << i << "}" << "{" << j << "} :";
            cin >> m1[i][j];
        }
    }   cout << endl;
        cout << "First Matrix:" << endl;
        for(int i=0;i<r1;i++){
           for(int j=0;j<c1;j++){
               cout << m1[i][j] << " ";
        }
        cout << endl;
    }for(int i = 0; i<r2 ; i++){
            for(int j = 0; j<c2 ; j++){
                cout << "Element {" << i << "}" << "{" << j << "} :";
            cin >> m2[i][j];
        }
    }   cout << endl;
        cout << "Second Matrix:" << endl;
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
               cout << m2[i][j] << " ";
        }
        cout << endl;
    }       
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                result[i][j] = m1[i][j] + m2[i][j];
            }
        }
        cout << endl;
        
        cout << "Sum of matrix:" << endl;;
        
        for(int i=0;i<r1;i++){
           for(int j=0;j<c1;j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    }
    else{
    cout << "The entered dimensions for matrix doesn't match.";
    }
    return 0;
    }

OUTPUT:
Enter number of rows of 1st matrix:2
Enter number of columns of 1st matrix:3
Enter number of rows of 2nd matrix:3
Enter number of columns of 2nd matrix:2
Element {0}{0} :11
Element {0}{1} :22
Element {0}{2} :33
Element {1}{0} :44
Element {1}{1} :55
Element {1}{2} :66

First Matrix:
11 22 33 
44 55 66 
Element {0}{0} :77
Element {0}{1} :88
Element {1}{0} :99
Element {1}{1} :10
Element {2}{0} :20
Element {2}{1} :30

Second Matrix:
77 88 
99 10 
20 30 

Sum of matrix:
88 110 33 
143 65 66 

=== Code Execution Successful ===
