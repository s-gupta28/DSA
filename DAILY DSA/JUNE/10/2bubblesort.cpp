#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int (&arr)[], int size){
    if(size==1){
        return ;
    }
    int i=0;
    while(i+1<size){
        if(arr[i]>arr[i+1]){
            arr[i]=arr[i]^arr[i+1];
            arr[i+1]=arr[i]^arr[i+1];
            arr[i]=arr[i]^arr[i+1];
        }
        i++;
    }
    bubbleSort(arr,size-1);
}

int main() {
    int arr[5]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    bubbleSort(arr,size);
    while(i<size){
        cout<<arr[i]<<endl;
        cout<<endl;
        i++;
    }
    
}
