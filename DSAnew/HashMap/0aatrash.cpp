#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   ;
    for(int j=0; j<=n; j++){
        for(int i=0; i<=(n-j); i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }   

    }
     
}
int main(){
    vector<int> arr={4, 3 ,2, 1};
    // int i=0;
    // int temp=arr[i];
    //         arr[i]=arr[i+1];
    //         arr[i+1]=temp;
    //         cout<<temp<<endl;
    //         cout<< arr[i]<<endl;
    //         cout<<arr[i+1]<<endl;

           
        
    bubbleSort (arr,arr.size());
    for(int j=0; j<arr.size();j++){
        cout<<arr[j]<<" ";
   }


}