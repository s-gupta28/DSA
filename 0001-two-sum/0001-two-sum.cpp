class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans={0,0};
        for(int i=0; i<n; i++){
           int toFind=target-nums[i];
           for(int j=i+1;j<n;j++){
            if(nums[j]==toFind){
                ans={i,j};
            }
           }
        }
    return ans;}
};