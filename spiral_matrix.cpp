#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> v;
    int left = 0 , right = n-1;
    int top = 0 , bottom = m-1;
    while(top<=bottom && left<=right){
        for(int i = left ; i<=right; i++){
               v.push_back(arr[top][i]);
        }
        top++;
        for(int i = top ; i<= bottom; i++){
            v.push_back(arr[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i = right; i>=left;i--){
                v.push_back(arr[bottom][i]);
            }
            bottom--;    
        }
        if(left<=right){
            for(int i = bottom; i>=top;i--){
                v.push_back(arr[i][left]);
            }
            left++;
        }
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}