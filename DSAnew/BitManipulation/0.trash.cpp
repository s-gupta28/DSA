# include<iostream>
#include <vector>
using namespace std;

// int bitwiseComplement(int n) {
//     int temp=n;
//     int comp=~n;
//     int ans=0;
//     int mask=0;
//     while(temp!=0){
//         mask=mask|1;
//         temp>>1;
//         if(temp!=0){
//             mask<<1;
//         }
//     }
//     ans=comp&mask;
//     ans=1;

// return ans; }

int findDuplicate(vector<int> &arr) 
{
    int size=arr.size();
    int ans=0;
    int count=1;
    for(int i=0; i<size; i++){
        cout<<i<<"i"<<endl;

        ans=ans^arr[i]^(i+1);
        cout<<ans<<"ans"<<endl;
        count++;
        cout<<i<<"i"<<endl;

    }
	
    return ans;
}


int main(){
    vector<int> arr;
    arr={1,2,3,4,1};
    cout<<findDuplicate(arr);
    
    }


