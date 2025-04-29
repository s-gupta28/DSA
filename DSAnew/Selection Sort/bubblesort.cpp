#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int> &nums){
    int max=INT_MIN;
    for(int i=nums.size()-1; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(nums[j]>max){
                max=nums[j];
                swap(nums[j],nums[i]);
            }

        }
        max=INT_MIN;
    }
    


}

int main(){
    vector<int> nums={65,25,12,22,11};
    bubble(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
cout<<endl;
}