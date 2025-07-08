class Solution {
private:
    void solve(vector<int> nums, int index,vector<vector<int>> &ans,vector<int> &temp){
        
        if(index==nums.size()){
            ans.push_back(temp);
            return;
        }

        int num=nums[index];
        solve(nums, index +1, ans, temp);

        temp.push_back(num);
         solve(nums, index +1, ans, temp);

        temp.pop_back();


    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums, index , ans, temp);
    return ans;}
};