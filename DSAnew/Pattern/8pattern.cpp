#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        int ch=2*i-1;
        int sp=n-i;
        for(int j=1; j<=sp; j++){
            cout<<" ";
        }
        for(int k=1; k<=ch; k++){
            cout<<"*";
        }
        cout<<endl;
    }

}