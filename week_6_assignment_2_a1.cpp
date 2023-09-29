#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of a sqaure matrix: ";
    cin>>n;
    int a[n][n];
    int point = n-1;
    cout<<endl<<"rnter elements for the matrix:"<<endl;
    for(int i =0; i<n;i++){
        for(int j =0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i =0; i<n;i++){
        for(int j =0;j<n;j++){
            if(i==j) cout<<a[i][j]<<" ";
            else if(j==point) cout<<a[i][j]<<" ";
            else cout<<"  ";
        }
        point--;
        cout<<endl;
    }
}