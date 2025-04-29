#include<iostream>
using namespace std;

// class Solution {
//     public:
//         int bitwiseComplement(int n) {
//             long int temp1=n;
//             long long temp2=n;
//              int i=0;
//             while(temp1!=0){
//                 temp2=temp2^(1<<i);
//                 temp1>>1;
//                 i++;
//             }
//         return n;}
//     };

int bitwiseComplement(int n) {
    int temp1=n;
    int temp2=n;
     int i=0;
    while(temp1!=0){
        n=n^(1<<i);
        temp1>>1;
        i++;
    }
return n;}




int main(){
    int n;
    cin>>n;
    int temp=n;
    int ans=n;
    int i=0;
    int mask;
    
    while(temp!=0){
        mask|1;
        mask=

        

    }
    
    cout<<ans<<endl;


}