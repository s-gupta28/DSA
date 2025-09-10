class Solution {
    double powN(double x, long long n){
        if(n==0){
            return 1;
        }
        if(n%2==0){
            return powN(x*x,n/2);
        }
        else{
            return x* powN(x,n-1);
        }
    }
    
public:
    double myPow(double x, int n) {
        long long nn =n;
        double ans=1.0;
        if(n<0){
            nn=-1*nn;
        }
        else{
            nn=n;
        }
        ans=powN(x,nn);
        if(n<0){
            return (1.0/ans);
        }
        return ans;

    }
};