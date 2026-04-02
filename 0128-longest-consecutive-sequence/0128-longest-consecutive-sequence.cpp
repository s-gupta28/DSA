class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int longest=1;
        int cnt=1;
        int lastS=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if((nums[i]-1)==lastS){
                cnt+=1;
                lastS=nums[i];
            }
            else if(nums[i]!=lastS){
                cnt=1;
                lastS=nums[i];
            }
            longest=max(longest,cnt);
        }
    return longest;}
};