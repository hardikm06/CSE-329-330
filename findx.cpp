#include<bits/stdc++.h>
using namespace std;
void findx(vector<int>&arr,int n,int x){
      int start = 0;
      int end = n-1;
      while(start<end){
        if(arr[start]+arr[end]==x){
            cout<<"("<<arr[start]<<","<<arr[end]<<")";
            cout<<endl;
        }
        else if(arr[start]+arr[end]<x){
            start++;
        }
        else if(arr[start]+arr[end]>x){
            end--;
        }
        else{
            break;
        }
      }
      
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    findx(arr,n,x);
}