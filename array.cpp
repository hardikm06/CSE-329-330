#include<iostream>
using namespace std;

int* insertion(int arr[],int &n,int pos, int x){
      n++;
      for(int i = n; i>=pos ; i--){
        arr[i] = arr[i-1];
      }
      arr[pos-1] = x;
      return arr;
}
int* deletion(int arr[],int &n,int pos){

      
      for(int i = pos-1; i < n ; i++){
        arr[i] = arr[i+1];
      }
      --n;
      return arr;
}
void printUpperTriangular(int arr[][100],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                cout<<"0"<<" ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }   
    cout<<endl;     
}

void printLowerTriangular(int arr[][100],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i>j){
                cout<<"0"<<" ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }        
}

int main(){
    // int row,col;
    // cin>>row>>col;
    
    // int arr[100][100];
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    //  printUpperTriangular(arr,row,col);
    //  printLowerTriangular(arr,row,col);
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int pos,x;
     cin>>pos>>x;
     insertion(arr,n,pos,x);
     
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}