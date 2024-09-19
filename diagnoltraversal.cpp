#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int row = 0, col = 0;
    int dir = 0;
    int count = 0;
    while(count++ < m*n){
        cout<<arr[row][col]<<" ";
        if(dir==0){
            if(col == n-1){
                dir = 1;
                row++;
            }
            else if(row == 0){
                dir = 1;
                col++;
            }
            else{
                row--;
                col++;
            }           
        }
         else{
            if(row==m-1){
                dir = 0;
                col++;
            }
            else if(col==0){
                dir = 0;
                row++;
            }
            else{
                row++;
                col--;
            }
        }
    }
    
    
}