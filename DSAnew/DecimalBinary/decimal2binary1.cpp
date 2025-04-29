#include <iostream>
#include<string.h>
#include<strings.h>
#include<string>
#include <bits/stdc++.h>

using namespace std;

string decimal2binary(int n){
    string ans="";
    while(n!=0){
        int rem=n%2;
        ans.append(to_string(rem));
        n=n/2;
    }
    reverse(ans.begin(), ans.end());
    return (ans) ;

}

int main(){
    int n;
    cin>>n;
    cout<<decimal2binary(n)<<endl;

}