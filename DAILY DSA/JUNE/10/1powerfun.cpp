
#include <bits/stdc++.h>
using namespace std;

int powerFun(int a, int b){
    if(b==0){
        return 1;
    }
    else if(b==1){
        return a;
    }
    
    //recurssive call
    int ans=powerFun(a,b/2);
    //if power even
    if(b%2==0){
        return ans*ans;
    }
    //if power odd
    else{
        return a*ans*ans;
    }
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<powerFun(a,b);
    
}
