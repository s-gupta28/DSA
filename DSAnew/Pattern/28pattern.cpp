#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=(2*n-1); i++){
        int sp,ch;
        if(i>5){
            sp=i-n;
            ch=2*n-i;
        }
        else{
            sp=n-i;
            ch=i;
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
    
