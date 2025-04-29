#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void selection(vector<int> &nums){
    int min1=INT_MIN;
    for(int i=0;i<nums.size()-1;i++){
            min1=INT_MAX;
           
     for(int j=i; j<nums.size(); j++){
       
            if(nums[j]<min1){
                min1=nums[j];
               
                swap(nums[i],nums[j]);
            }
     }      
    }
    


}

int main(){
    vector<int> nums={65,25,12,22,11};
    selection(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
cout<<endl;
}