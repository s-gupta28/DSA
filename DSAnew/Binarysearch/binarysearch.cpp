#include <iostream>
using namespace std;

int bs(int arr[], int size, int key  ){
    int start;
    int end;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        return -1;
    }
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,6,11,14,16};
    int index=bs(even, 6, 12  );
    cout<<index;

}