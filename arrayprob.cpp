#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[] = {1,2,3,4}; //output should be = [24,12,8,6] without using division
    int n = 4;
    int left[4] ,rp = 1;
    left[0]=1;
    
    for(int i=1;i<n;i++){
        rp = rp*nums[i-1];
        left[i] = rp;
    }
    rp=1;
    for(int i = n-2;i>=0;i--){//right
        rp = rp*nums[i+1];
        left[i]=left[i]*rp;
    }
    for(int i=0; i<n;i++){
        
        cout<<left[i]<<" ";
    }
    return 0;
}
