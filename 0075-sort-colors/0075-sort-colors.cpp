class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int one=0;
        int two=0;
        int i=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]==0){
                zero++;
            }
            if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
            i++;
        }
        int j=0;
        vector<int> vec(n);
        while(zero!=0 && j<n){
            vec[j]=0;
            zero--;
            j++;
        }
        while(one!=0 && j<n){
            vec[j]=1;
            one--;
            j++;
        }
        while(two!=0 && j<n){
            vec[j]=2;
            two--;
            j++;
        }
        nums=vec;
     
    }
};