#include <bits\stdc++.h>
using namespace std;

/*
Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:

Input: strs = ["act","pots","tops","cat","stop","hat"]

Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]
Example 2:

Input: strs = ["x"]

Output: [["x"]]
Example 3:

Input: strs = [""]

Output: [[""]]
Constraints:

1 <= strs.length <= 1000.
0 <= strs[i].length <= 100
strs[i] is made up of lowercase English letters.
*/
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<unordered_map <char,int>>> ans;
    vector<vector<string>> group;
    int s=0;
    int e=0;
    for(s=0; s<strs.size(); s++){
        vector<string> temp={};

        while(e<strs.size()){
            if(s!=e){
                if(strs[s].length()==strs[e].length()){
                    temp.push_back(strs[s]);
                    temp.push_back(strs[e]);
    
                }
                else{
                    e++;
                }
            }
            for(string i: temp){
                cout<<i<<endl;
            }cout<<endl;
    
        }
        group.push_back(temp);

    }
   
for(auto i:group){
    for( auto j: i){
        cout<<j<<" ";
    }
    cout<<endl;
}
return {{}};}

int main(){

    vector<string> strs={"act","pots","tops","cat","stop","hat"};
    vector<vector<string>> ans =groupAnagrams(strs);
    for(auto i: ans){
        for( string s: i){
            cout<< s<<" ";
        }
        cout<<endl;
    }

}