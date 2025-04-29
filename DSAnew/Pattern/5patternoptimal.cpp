#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<(2*n-1); i++){
        int c;
        if(i>4){
            c=2*n-i-2;
        }
        else{
            c=i;
        }
        for(int j=0; j<=c; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}