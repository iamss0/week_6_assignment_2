// Write a program to print the matrix in wave form.
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

    for(int i =0; i<n;i++){
        for(int j =0;j<n;j++){
            cin>>a[i][j];
        }
    }

    //wave-->>
    for(int j =0; j<n; j++){
        if(j%2==0){
            for(int i =m-1; i>=0; i--){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i =0; i<m; i++){
                cout<<a[i][j]<<" ";
            }
        }
    }
}