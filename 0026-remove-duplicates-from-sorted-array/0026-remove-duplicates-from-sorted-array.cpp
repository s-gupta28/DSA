class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int left=1;
        int right=1;
        while(right<n){
            if(nums[right]!=nums[right-1]){
                nums[left]=nums[right];
                left++;
            }
            right++;
        }
        return left;
    }
};