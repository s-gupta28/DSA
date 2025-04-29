#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}