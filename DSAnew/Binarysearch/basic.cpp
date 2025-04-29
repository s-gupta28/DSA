#include<bits\stdc++.h>
using namespace std;
 

// binary serach for sorted datastructure ONLY
int binarySearch(vector<int> nums, int target){
    if(nums.size()==0){
        return -1;
    }
    int s=0;
    int e=nums.size()-1;
    int mid=(e-s)/2 +s; //to prevent overflow

    //when s>e loop ends as search space ends
    while(s<=e){
        mid=(e-s)/2 +s;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }


    }
    

}