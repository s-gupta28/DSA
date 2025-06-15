class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        set <int> s;
        int i=0;
        while(i<nums.size()){
           s.insert(nums[i]);
           i++;
        }
        int ans=s.size();
        i=0;
        vector<int> temp;
        for (auto i : s) {
            temp.push_back(i);
        }
       
        nums=temp;
        cout<<ans<<endl;
        
        return ans;
    }
};