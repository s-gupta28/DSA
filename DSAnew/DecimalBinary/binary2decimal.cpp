#include<iostream>
using namespace std;

int bin2dec(int n){
    int ans=0;
    int pwr=1;
    while(n!=0){
        int digit=n%10;
        ans=ans+(digit*pwr);
        pwr=pwr*2;
        n=n/10;
    }
    return ans;

}

int main(){
    int n;
    cin>>n;
    cout<<bin2dec(n);
    
    

}