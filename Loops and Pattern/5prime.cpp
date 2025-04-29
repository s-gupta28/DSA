#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =2;
    int check;
    while(i<n){
        if(n%i==0){
           check=1;
        }
        i++;
    }
    if(check==1){
        cout<<"NOT PRIME"<<endl;
    }
    else{
        cout<<"PRIME"<<endl;
    }
}