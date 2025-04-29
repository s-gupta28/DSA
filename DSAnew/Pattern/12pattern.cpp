#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=2*n; i++){
        int ch=n-i+1;
        int sp=i-1;
        if(i>=6){
            ch=i-n;
            sp=2*n-i;
        }
        for(int j=1; j<=sp; j++){
            cout<<" ";
        }
        for(int k=1; k<=ch; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

}