class Solution {
public:
    void reverseString(vector<char>& s) {
        stack <char> stk;
        int i=0;
        int n=s.size();
        while(i<n){

            stk.push(s[i]);
            i++;
        }
        
        vector<char> v;
        while(!stk.empty()){
            v.push_back(stk.top());
            stk.pop();
           
        }
        s=v;
    }
};