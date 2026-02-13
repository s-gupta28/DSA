class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==1){
                 return 1;
            }
            else{
                return 0;
            }
           
        }
        
        int len=0;
        int maxLen=0;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                len++;
            }
            if(nums[i]!=1 || i==n-1){
                maxLen=max(len,maxLen);
                len=0;    
            }
            
            
        }
        return maxLen;

    }
};