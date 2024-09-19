

//------------------------------IF duplicate not present------------------------------------

#include<bits/stdc++.h>
using namespace std;

int main(){
	int m=4;
	int n=4;
	int matrix[4][4] = {
						{1,2,3,4},
						{4,1,3,2},
						{5,4,2,1},
						{1,2,4,3}
					};
    
	vector<int> v;
	int result[4] = {1,1,1,1};
	for(int i=1;i<m;i++){
		set<int> s;
		for(int j=0;j<n;j++){
			s.insert(matrix[i][j]);
		}
		for(int j=0;j<n;j++){
			if(s.find(matrix[0][j])==s.end()){
				result[j]=0;
				break;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		if(result[i]==1){
			v.push_back(matrix[0][i]);
		}
	}
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}


//----------------------------------IF DUPLICATE PRESENT---->-->--->-->--->---WRONG APPROCH DONE BY ME-----------------------


//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int m=4;
//	int n=4;
//	int matrix[4][4] = {
//						{1,2,1,2},
//						{4,1,2,2},
//						{5,4,2,1},
//						{1,2,4,3}
//					};
//    
//	vector<int> v;
//	int result[4] = {1,1,1,1};
//	for(int i=1;i<m;i++){
//		map<int,int> map;
//		for(int j=0;j<n;j++){
//			map[matrix[i][j]]++;
//		}
//		for(int j=0;j<n;j++){
//			if(map.find(matrix[0][j])==map.end()){
//				result[j]=0;
//				map[matrix[0][j]]--;
//				break;
//			}
//		}
//	}
//	
//	for(int i=0;i<n;i++){
//		if(result[i]==1){
//			v.push_back(matrix[0][i]);
//		}
//	}
//	
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<" ";
//	}
//}
//