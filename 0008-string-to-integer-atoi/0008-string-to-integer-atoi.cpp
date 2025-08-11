class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.length();
        //to skip whitespace
        while(i<n && s[i]==' '){
            i++;
        }
        //note i value is changed and used in each condition

        //to read sign
        int sign =1;
            if(i<n && (s[i]=='-'|| s[i]=='+')){
                if(s[i]=='-'){
                    sign=-1;
                }
               i++;
            }
        
        // calc the number
        int result =0;
        while (i<n && isdigit(s[i])){
            int digit=s[i]-'0';
            //Rounding
            //INT_MAX=2147483647
            //INT_MIN=2147483648
            if(result>INT_MAX/10|| result==INT_MAX/10 && digit>7){
              if(sign==1){
                return INT_MAX;
              }
              else{
                return INT_MIN;
              }

            }
              result=result*10+digit;
            i++;
        }        
   return result*sign;
    }
};