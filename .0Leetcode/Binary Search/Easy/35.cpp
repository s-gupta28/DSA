 #include <iostream>
 #include <vector>
 using namespace std;
        int searchInsert(vector<int>& nums, int target) {
            int left=0;
             
             int right=nums.size();
             int mid=0;
             while(left<right){
                mid=left+(right-left)/2;
                if(nums[mid]==target){
                    return mid;            
                    }            
                else if(nums[mid]>=target){
                    right=mid;
                }
    
                else{
                    left=mid+1;
                }
    
             }
             return left;
        }
   