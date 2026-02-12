class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return true;
        }
        int count=1;
        int i=1;
        //ERROR always use i if using while
        // here we are trying to iterate the array twice
        while(i<(2*n)){
            if(nums[(i-1)%n]<=nums[i%n]){
                count++;
            }
            else{
                count=1;
            }
            // this correct pos of if
            if(count==n){
                return true;
            }
            i++;
        }
        return false;
    }
};