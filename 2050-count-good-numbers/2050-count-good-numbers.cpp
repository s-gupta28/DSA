
class Solution {
private:
        const int MOD=1e9+7;
        long long powN(long long x, long long n){
            long long ans=1;
            while(n>0){
                if(n%2==1){
                    ans=(ans*x )%MOD;
                    n=n-1;
                }
                else{
                x=(x*x)%MOD;
                n=n/2;}
            }
        return ans;}
public:

    
    int countGoodNumbers(long long n) {
        long long even=n/2+n%2;
        long long odd=n/2;
        long long resOdd=powN(4,odd);
        long long resEven=powN(5,even);
        return (resOdd*resEven)%MOD;
        
    }
};