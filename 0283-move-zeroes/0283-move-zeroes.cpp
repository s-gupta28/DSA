class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return;
        }
        int left=0;
        for(int right=0; right<n;right++ ){
            if(nums[right]!=0){
                nums[left]=nums[right];
                left++;
            }
        }
        for(int i=left; i<n;i++ ){
            nums[i]=0;
        }
        return;
    }
};