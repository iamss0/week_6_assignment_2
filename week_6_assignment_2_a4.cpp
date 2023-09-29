// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of a sqaure matrix: ";
    cin>>n;
    int a[n][n];
    int inpt = 1;
 
    
    //SPIRALLLL
    int min_r = 0, max_c = n-1, min_c=0, max_r =n-1;
    int tne = n*n;
    int count = 0 ;
    while(min_r<=max_r && min_c<=max_c){
        //left to right
        for(int j=min_c; j<=max_c && count<tne; j++){
            a[min_r][j] = inpt;
            cout<<a[min_r][j]<<" ";
            count++;
            inpt++;
        }
        min_r++;
        //up to down
        for(int i=min_r; i<=max_r && count<tne;i++){
            a[i][max_c] = inpt;
            cout<<a[i][max_c]<<" ";
            count++;
            inpt++;
        }
        max_c--;
        //right to left
        for(int j = max_c; j>=min_c && count<tne; j--){
            a[max_r][j] = inpt;
            cout<<a[max_r][j]<<" ";
            count++;
            inpt++;
        }
        max_r--;
        //down to up
        for(int i= max_r; i>=min_r && count<tne; i--){
            a[i][min_c] = inpt;
            cout<<a[i][min_c]<<" ";
            count++;
            inpt++;
        }
        min_c++;
    }
    cout<<endl<<endl;
    for(int i =0; i<n; i++ ){
        for(int j =0; j<n; j++){
            cout<<a[i][j]<<"   ";
        }
    cout<<endl<<endl;
    }

}