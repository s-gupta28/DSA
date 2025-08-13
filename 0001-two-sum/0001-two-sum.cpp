class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> vec;
        for(int i=0; i+1<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                    vec={i,j};
                }
            }
        }
        return vec;
    }
};