#include<bits/stdc++.h>
using namespace std;
    stack<int> st1;
    stack<int> st2;
    int minval = INT_MAX;
void push(int x){
    if(x < minval){
        minval = x;
    }
       st1.push(x);
      
       st2.push(minval);
}
int pop(){
   int top = st1.top();
   st1.pop();
   st2.pop();
   minval = st2.top();
   return top;
}
int getmin(){
    return minval;
}
int main(){
    
   push(4);

   push(2);
   push(5);
   push(1);
   push(3);
   cout<<pop()<<endl;
   cout<<pop()<<endl;
   push(5);
   cout<<getmin()<<endl;
   cout<<pop()<<endl;
   cout<<getmin()<<endl;
   cout<<pop()<<endl;
   cout<<getmin()<<endl;
}