#include<bits\stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    vector <char> stk;

    for(int i=0; i<s.length(); i++){

        if( stk.size()!=0 && stk.back()==s[i] ){
            stk.pop_back();
        }
        else{
            stk.push_back(s[i]);

        }
        
        for(char c: stk){
            cout<<c<<" ";
        }
        cout<<endl;
    }
        
    string ans="";

    for(char c: stk){
        ans=ans+c;
    }

    return ans;

}

int main(){
    string s="abbaca";
    s=removeDuplicates( s);
    cout<<s;

}