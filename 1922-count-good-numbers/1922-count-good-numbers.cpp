# define mod 1000000007
class Solution {
private:
    long long power(long long x, long long y){
        if(y==0){
            return 1;
        }
        if(y==1){
            return x;
        }
        
        long long ans=power(x,y/2);
        ans=ans*ans;
        //when multi do %mod
        ans=ans%mod;
        if(y%2==1){
            ans=x*ans;
        }
         //when multi do %mod
        ans=ans%mod;
        return ans;

    }
public:
    int countGoodNumbers(long long n) {
        long long even=n/2+n%2;// ceil value
        long long odd=n/2; //floor value
        // even no. at even pos 5
        // prime no. at odd pos 4
        return (power(5,even)*power(4,odd))%mod;

    }
};