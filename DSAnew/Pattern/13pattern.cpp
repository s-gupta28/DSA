#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i!=5){
            int sp2=2*i-3;
            int sp1=n-i;
            for(int j=1; j<=sp1; j++){
            cout<<" ";
               if(j==sp1){
                cout<<"*";
              }
             }
        for(int k=1; k<=sp2; k++){
            
            cout<<" ";
            if(k==sp2){
                cout<<"*";
              }
        }
        cout<<endl;

        }
        else{
            for(int i=1; i<=2*n-1; i++){
                cout<<"*";
            }
        }
        
    }

}