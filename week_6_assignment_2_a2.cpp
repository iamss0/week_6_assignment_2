// Write a program to rotate the matrix by 90 degrees anti-clockwise.
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of col matrix: ";
    cin>>n;
    cout<<"Enter no. of row matrix: ";
    cin>>m;
    int a[m][n];
    cout<<endl<<"rnter elements for the matrix:"<<endl;
    //creating the original; matrix
    for(int i =0; i<n;i++){
        for(int j =0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // creating the 90 deg anti clock wise rotated matrix
    // step 1: transpose
    // step 2: print it column wise but in reverse manner;

    for(int j =n-1; j>=0; j--){
        for(int i =0; i<m; i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}