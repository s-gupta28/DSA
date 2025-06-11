#include <bits/stdc++.h> 
int parition(vector<int> & arr,int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    
    //
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[low],arr[j]);
    return j;
}
    


void qS( vector<int> & arr,int low, int high){
    if(low>=high){
        return;
    }
    int p=parition(arr,low,high);
    qS(arr,low,p-1);
    qS(arr,p+1,high);
}
vector<int> quickSort(vector<int> arr)
{
 qS(arr,0,arr.size()-1)  ;
 return arr;
}



