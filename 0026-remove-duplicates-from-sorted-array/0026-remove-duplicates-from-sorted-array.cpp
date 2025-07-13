class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        
        int ans=0;
        int str=0;
        int end=1;
        int index=1;
        while(end!=nums.size()){
            if(nums[end]!=nums[str]){
                nums[index]=nums[end];
                index++;
                str=end;
                ans++;
                end++;
                continue;
            }
            end++;


        }
        
    return ans+1;}
};