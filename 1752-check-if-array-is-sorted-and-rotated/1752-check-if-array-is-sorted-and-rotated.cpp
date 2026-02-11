class Solution {
    private:
    vector<int> reverseArray(vector<int>nums,int str, int end){
        if(str>=end){
            return nums;
        }
        int left=str;
        int right=end;
        while(left<right){
            //swapping (nospace)
            // nums[left]=nums[left]^nums[right];
            // nums[right]=nums[left]^nums[right];
            // nums[left]=nums[left]^nums[right];
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
        return nums;
    }

    vector<int> undoRotated(vector<int> nums){
         int ptofrotate=0;
         for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i]){
                ptofrotate=i;
                break;
            }
         }
         if(ptofrotate==0){
            return nums;
         }
         vector<int> unrotated;
         
        

         unrotated=reverseArray(nums,0,ptofrotate-1);
         
         unrotated=reverseArray(unrotated,ptofrotate,nums.size()-1);
         unrotated=reverseArray(unrotated,0,nums.size()-1);
         return unrotated;

    }
    bool checkSorted(vector<int> nums){
        for(int i=1; i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                return false;
            }
        }
        return true;
    }
    void printArray(vector<int> nums){
        for(int i=0; i<nums.size();i++){
            cout<<nums[i]<<endl;
        }
    }
public:
    bool check(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        bool ans=0;
        vector<int> unrotated;
       
        unrotated=undoRotated(nums);
        // printArray(unrotated);
        ans=checkSorted(unrotated);
        return ans;
    }
};