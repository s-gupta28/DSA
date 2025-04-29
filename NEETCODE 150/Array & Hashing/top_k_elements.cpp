#include <bits\stdc++.h>
#include <iostream>
using namespace std;


/*
Top K Frequent Elements
Given an integer array nums and an integer k, return the k most frequent elements within the array.

The test cases are generated such that the answer is always unique.

You may return the output in any order.

Example 1:

Input: nums = [1,2,2,3,3,3], k = 2

Output: [2,3]
Example 2:

Input: nums = [7,7], k = 1

Output: [7]
Constraints:

1 <= nums.length <= 10^4.
-1000 <= nums[i] <= 1000
1 <= k <= number of distinct elements in nums.


Recommended Time & Space Complexity
You should aim for a solution with O(n) time and O(n) space, where n is the size of the input array.*/


vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> ans;
        unordered_map<int, int> um;
        for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
        }

        int max1=INT_MIN;
        int posans=0;
        for(int i=0; i<k; i++){
            max1=INT_MIN;
            posans=0;
            for(auto i: um){  
                if(max1<i.second) {
                    max1=i.second;
                    posans=i.first;
                }
              
        }
        cout<<posans<<"posans"<<endl;
        ans.push_back(posans);
        um.erase(posans);
}
return ans;}

//[1,2,2,3,3,3], k = 2
int main(){
    vector<int> nums={7,7};
    int k=1;
    nums=topKFrequent(nums,k);
    for(int i: nums){
        cout<<i<<" ";
    }
    cout<<endl;

}