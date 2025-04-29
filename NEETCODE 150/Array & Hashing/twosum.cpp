#include <bits\stdc++.h>
using namespace std;



vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int,int> um;
    for(int i=0;i<nums.size();i++){
        int temp=target-nums[i];

        //if ele is found um.find(temp)!=um.end()
        //here we first check if element compliment is there 
        //then later it is inserted 
        // rule:first check then insert

        if(um.find(temp)!=um.end()){
            // the smaller index is in um[temp] as the (ith ele) is the later ele which checks from the already present ele so return {um[temp], i}; is the order of returning 

            return {um[temp], i};

        }

        um[nums[i]]=i;
    }
    return {};
}


    int main(){
        vector<int> ans={};
        vector<int> nums={4,5,6};
        int target=10;
        ans=twoSum(nums,target);

        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;

    }