class Solution {
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
        while(nn>0){
            if(nn%2==1){
                ans=ans*x;
                nn=nn-1;
            }
            
                 x=x*x;
                 nn=nn/2;

            
           
        }
        if(n<0){
            return (1.0/ans);
        }
        return ans;


        


    }
};