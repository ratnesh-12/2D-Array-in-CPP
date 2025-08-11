#include<iostream>
using namespace std;

int main() {
    int i, j, r1, c1, r2, c2;
    cout<<"Enter number of rows & column: ";
    cin>>r1>>c1;
    int ar[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<"Enter element-"<<i+1<<j+1<<":";
            cin>>ar[i][j];
        }
    }
    r2=c1;
    c2=r1;
    int t[r2][c2];
    cout<<endl<<"Transposed Matrix:\n";
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            t[i][j]=ar[j][i];
            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
    }
}

OUTPUT:
Enter number of rows & column: 2 3
Enter element-11:11
Enter element-12:22
Enter element-13:33
Enter element-21:44
Enter element-22:55
Enter element-23:66

Transposed Matrix:
11  44  
22  55  
33  66  

=== Code Execution Successful ===
