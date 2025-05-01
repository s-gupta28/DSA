#include<iostream>
#include<vector>
using namespace std;
int upperBound(vector<int> &arr, int x, int n){
	int left=0;
	int right=arr.size();
	int mid=0;
	while(left<right){
		mid=left+(right-left)/2;
		if(arr[mid]<=x){
           left=mid+1;
		}
		else{
           right=mid;
		}
	}
return left;}