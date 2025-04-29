#include <vector>
#include <iostream>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k){
    int firstPosition(vector<int>& arr, int n, int k);
    int lastPosition(vector<int>& arr, int n, int k);
    int first=firstPosition( arr,  n,  k);
    int last=lastPosition( arr,  n,  k);
    return {first,last};


}

int lastPosition(vector<int>& arr, int n, int k){
    int start=0;
    int end= n-1; 
    int mid=(end-start)/2+start;
    int last=-1;
    while(start<=end){
        if(arr[mid]==k){
            last=mid;
            start=mid+1;
        }
        else if (arr[mid]<k){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }

    return last;
    
}
int firstPosition(vector<int>& arr, int n, int k){
    int start=0;
    int end= n-1; 
    int mid=(end-start)/2+start;
    int first=-1;
    while(start<=end){
        if(arr[mid]==k){
            first=mid;
            end=mid-1;
        }
        else if (arr[mid]<k){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }

    return first;
    
}

int main(){
    vector<int> arr={0,0,1,1,2,2,2,2};
    int n=8;
    int k=2;
    pair<int , int >p;
    p=firstAndLastPosition(arr, n,k);
    cout<<p.first<<"first"<<endl;
    cout<<p.second<<"second"<<endl;
}