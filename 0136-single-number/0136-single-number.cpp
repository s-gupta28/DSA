class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        //initialize
        int ans=0;
      for(int i=0; i<n; i++){
        ans=ans^nums[i];
      } 
      return ans; 
    }

};