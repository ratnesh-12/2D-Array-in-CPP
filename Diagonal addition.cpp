#include<iostream>
using namespace std;

int main() {
    intr, c, i, j;
    cout<<"Enter matrix dimension: ";
    cin>>r>>c;
    intar[r][c], add=0, sum=0;
    if(r==c){
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cout<<"Enter element-("<<i<<j<<"): ";
                cin>>ar[i][j];
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i==j){
                    add+=ar[i][j];
                }
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i+j==(r-1)){
                    sum+=ar[i][j];
                }
            }
        }
        cout<<endl<<"Sum of diagnol-1: "<<add<<endl;
        cout<<"Sum of diagnol-2: "<<sum<<endl;
    }
    else{
        cout<<"No diagnol addition"<<endl;
    }}

OUTPUT:
Enter matrix dimension: 3
3
Enter element-(00): 11
Enter element-(01): 22
Enter element-(02): 33
Enter element-(10): 44
Enter element-(11): 55
Enter element-(12): 66
Enter element-(20): 77
Enter element-(21): 88
Enter element-(22): 99

Sum of diagnol-1: 165
Sum of diagnol-2: 165

=== Code Execution Successful ===
