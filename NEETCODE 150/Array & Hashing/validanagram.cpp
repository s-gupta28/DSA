#include<bits\stdc++.h>
using namespace std;

// Valid Anagram
// Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

// An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

// Example 1:

// Input: s = "racecar", t = "carrace"

// Output: true
// Example 2:

// Input: s = "jar", t = "jam"

// Output: false
// Constraints:

// s and t consist of lowercase English letters.


bool bruteforce(string s, string t) {
   
    array<int ,25> arr1 {};
    array<int ,25> arr2 {};
    for(int i=0; i<s.length(); i++){
        arr1[s[i]-'a']++;
       
    
    }
    for(int i=0; i<t.length(); i++){
        arr2[t[i]-'a']++;
    }

    for(int i:arr1){
        cout<<i<<" ";
    }
cout<<endl;
cout<<endl;

for(int i:arr2){
    cout<<i<<" ";
}
cout<<endl;


// cout<<(arr1==arr2); its comparing of address of 1st ele pf both array so always false
//Decay in C++ is the implicit conversion of an array to a pointer
// to its first element in most expressions.


// true when   array<int ,25> arr1 {}; array<int ,25> arr2 {};
    if(arr1==arr2){
        return true;
    }

    return false;
        
    }

    bool isAnagram(string s, string t) {

        if(s.length()!= t.length()){
            return false;
        }

        unordered_map<char, int> countS, countT;

        for(char c: s) countS[c]++;
        
        for(char c: t) countT[c]++;

        return countS==countT;
        
    }  
    



int main(){
    string s="a";
    string t= "ab";
    bool ans;
    // ans=isAnagram(s,t);
    // cout<<ans;
}