class Solution {
public:
    double myPow(double x, int n) {
        int y=n;
        if(n<0){
            y=-n;
        }
        if(y==0){
            return 1;
        }
        if(y==1){
            if(n<0){
                return (1/x);
            }
            return x;
        }
        double ans=myPow(x,y/2);
        ans=ans*ans;
        if(y%2==1){
            ans=x*ans;
        }
        if(n<0){
            return (1/ans);
        }
        return ans;
    }
};