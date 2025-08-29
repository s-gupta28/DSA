class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum = nums[n-1] + nums[n-2] + nums[n-3];
        for(int i=0; i<n; i++){
            int left=i+1;
            int right=n-1;
           while(left<right){
            int mid = nums[i] + nums[left] + nums[right];
            if(abs(mid - target) < abs(sum - target)) {
               sum = mid;
            }
            else if(mid > target){
                right--;
            }
            else if(mid< target){
                left++;
            }
            else{
                return target;
            }
        }
        
        
    }return sum;
    }
};