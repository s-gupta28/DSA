class Solution {
    private:
    void printVec(vector<int> vector){
        for(int i=0; i<vector.size(); i++){
            cout<<vector[i];
        }
    }

public:
    bool check(vector<int>& nums) {
        if(nums.size()==1){
            return true;
        }
        vector<int> temp=nums;
        //contacatinating same array
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        
        int left=0;
        int right=0;
        int size=1;
        
        int i=1;//ALWAYS HERE as i+1 cause error
        while(i<temp.size()){
            if(size==nums.size()){
                return true;
            }
            if(temp[i-1]<temp[i]){
                size++;
            }
            else{
                size=1;
            }
            i++;
        }
        return false;
    }
};