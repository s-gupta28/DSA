#include<bits\stdc++.h>
using namespace std;

/*Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false*/
bool checkInclusion(string s1, string s2) {
        int count[26];
        for(int i=0;i<s1.length();i++){
            count[s1[i]-'a']++;
        }

        int s=0;
        int e=s1.length()-1;

        

}