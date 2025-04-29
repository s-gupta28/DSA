#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    int n=arr.size();
    int s=0;
    int e=n-1;
    int mid=(e-s)/2+s;
    while(s<=e){
        
        
        if(arr[mid]>arr[mid-1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(e-s)/2+s;
        cout<<"mid"<<mid<<endl;
        cout<<"start"<<s<<endl;
        cout<<"end"<<e<<endl;
    }
return mid;}

int main(){
    vector<int> arr={-1, 0,1,2,1,0,-1};
    int ans=peakIndexInMountainArray(arr);
    cout<<ans;
}