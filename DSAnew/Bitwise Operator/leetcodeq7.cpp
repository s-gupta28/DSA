#include<iostream>
using namespace std;

  int pow(int a, int n ){
        int pow=0;
        for(int i=1; i<=n; i++){
            pow= pow*a;
        }
        return pow;           
    }
   int reverse(int x) {
        int cdigit=0,t=x, rev=0;
        while(t!=0){
            t=t/10;
            cdigit++;
            
        }
        cout<<pow(10,(cdigit-1));
        
        while(x!=0){
            cdigit--;
            t=t%10;
            rev=rev+pow(10,(cdigit-1));
            x=x/10;
        }    
        return rev ;
        }
    int main(){
        int n;
        cin>>n;
        cout<<endl;
        cout<<reverse(n)<<endl;
    }


    