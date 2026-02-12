class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
        int n=nums.size();
       if(n==1){
            return 1;
       }
    //    if(n==2){
    //     if(nums[0]!=nums[1]){
    //         return 2;
    //     }
    //     else(){
    //         else return 1l
    //     }
    //    }
        int l=0;
        int r=1;
        int ans=1;
        while(r<n){
            if(nums[l]==nums[r]){
                r++;
            }
            //in else nums[l]!=nums[r]
            else{
                ans++;
                nums[l+1]=nums[r];
                l++;
                r++;
            }

        }
        return ans;
    }
};