#include <iostream>
using namespace std;

int swap(int a, int b){
    a=a^b;
    b=a^b;
    a=a^b; // swapping without third variable
    return a,b;
    
}

bool ith_bit_set_or_not(int n, int i){
    if(1&(n>>i)!=0) {
        return true; // issue with the 13,1
    }
    else {
        return false;
    }
}

void set_ith_bit(int n, int i){
    
    int ans1=0;
    int p101=1;
    int temp=n;
    while(temp!=0){
        int bit=temp&1;
        ans1=(bit*p101)+ans1;
        p101=p101*10;
        temp=temp>>1;
    }
cout<<"before"<<ans1<<endl;
    n=n|(1<<i);
    int ans=0;
    int p10=1;
    while(n!=0){
        int bit=n&1;
        ans=(bit*p10)+ans;
        p10=p10*10;
        n=n>>1;
    }
cout<<"after"<<ans<<endl;
}

void clear_ith_bit(int n, int i){
    int ans1=0;
    int p101=1;
    int temp=n;
    while(temp!=0){
        int bit=temp&1;
        ans1=(bit*p101)+ans1;
        p101=p101*10;
        temp=temp>>1;
    }
cout<<"before"<<ans1<<endl;
    n=n & (~(1<<i));
    int ans=0;
    int p10=1;
    while(n!=0){
        int bit=n&1;
        ans=(bit*p10)+ans;
        p10=p10*10;
        n=n>>1;
    }
cout<<"after"<<ans<<endl;

}
void toggle_ith_bit(int n, int i){
    int ans1=0;
    int p101=1;
    int temp=n;
    while(temp!=0){
        int bit=temp&1;
        ans1=(bit*p101)+ans1;
        p101=p101*10;
        temp=temp>>1;
    }
cout<<"before"<<ans1<<endl;
    n=n ^ ((1<<i));
    int ans=0;
    int p10=1;
    while(n!=0){
        int bit=n&1;
        ans=(bit*p10)+ans;
        p10=p10*10;
        n=n>>1;
    }
cout<<"after"<<ans<<endl;

}

void remove_last_set_bit(int n){ 
    
        int ans1=0;
        int p101=1;
        int temp=n;
        while(temp!=0){
            int bit=temp&1;
            ans1=(bit*p101)+ans1;
            p101=p101*10;
            temp=temp>>1;
        }
    cout<<"before"<<ans1<<endl;
        n= n & (n-1);
        
        
        int ans=0;
        int p10=1;
        while(n!=0){
            int bit=n&1;
            ans=(bit*p10)+ans;
            p10=p10*10;
            n=n>>1;
        }
    cout<<"after"<<ans<<endl;
    
    }
    bool if_power_of_2(int n){
        if((n & (n-1))==0){
            return 1;
        }
        else{
            return 0;
        }

    }

    int count_set_bits(int n){
        int cnt=0;

        while(n>0){
            cnt=cnt+(n&1); 
            cout<<"cnt"<<cnt<<endl; //n&1 checks if odd here counts when the n%2!=0 BASICALLY COUNT THE REMAINDER WHEN IT IS 1
            n=n>>1; // n>>1 == n/2 it remove the last bit;
        }
        return cnt;

    }
    int bestcount_set_bits(int n){
        int cnt=0;

        while(n>0){
            
           n=n&n-1;
           cnt++;

        }
        return cnt;

    }


int main(){
    cout<<bestcount_set_bits(8);
}