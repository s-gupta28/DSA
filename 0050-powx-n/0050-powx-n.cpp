class Solution {
private:
    double helper(double x,long long n ){
         if(x==0){
            return 0;
         }
         if(n==0){
            return 1;
         }
         double res= helper(x,n/2);
         //if odd power
         if(n%2==1){
            return x*res*res;
         }
         else{
            return res*res;
         }

    }
public:
    double myPow(double x, int n) {
        long  long N=n;
        double res;
        res=helper(x,abs(N));
        if(n>=0){
            return res;
        }
        else{
            return 1/res;
        }
        
    }
};