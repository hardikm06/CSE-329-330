#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[] = {2,1,0,0,1,2};
    int n=6;
    int left = 0, right = 5;
    int mid = 0;
    while(mid <= right){
        if(nums[mid] == 2){
            swap(nums[mid],nums[right]);
            right--;
        }
        else if(nums[mid]==0){
            swap(nums[left],nums[mid]);
            left++;
            mid++;
        }
        else{
            mid++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}