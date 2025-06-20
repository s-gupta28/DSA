class Solution {
public:
    void reverseString(vector<char>& s) {
        stack <int> stk;
        int i=0;
        while(i<s.size()){
            stk.push(s[i]);
            i++;
        }
        i=0;
         while(i<s.size()){
            s[i]=stk.top();
            stk.pop();
            i++;
        }
    }
};