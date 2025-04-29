#include<iostream>
#include <bits\stdc++.h>
using namespace std;


    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        int arr[26] = {0}; // Frequency array for 26 English alphabets
        int num = 0;
    
        // Count frequency of each character (case insensitive)
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z') {
                num = ch - 'a'; // Convert lowercase to index
            } else {
                num = ch - 'A'; // Convert uppercase to index
            }
            arr[num]++;
        }
    
        int maxi = INT_MIN; // Store max frequency found
        int ans = 0;         // Store index of character with max frequency
    
        // Find character with maximum frequency
        for (int i = 0; i < 26; i++) {
            if (maxi < arr[i]) {
                maxi = arr[i];
                ans = i;
            }
        }
    
        return 'a' + ans; // Convert index back to corresponding character
    }

   
// set<char> st;
// st.insert('a');    // adds 'a'
// st.count('a');     // returns 1 if 'a' is present, else 0
// st.erase('a');     // removes 'a'

char l(char c){

    if(islower(c)){
        return c;
    }
    else{
        return(c-'A'+'a');
    }
}
char bruteF(string s){
    int n=s.length();
    int max1=INT_MIN;
    int count=1;
    char ans=' ';
    set<char> v;
    for(int i=0; i<n;i++){
        count=1;
        for(int j=i; j<n;j++){
            if(i!=j){
              
                if(l(s[i])==l(s[j] )&& (!v.count(l(s[i]))) ){
                    cout<<s[i]<<endl;
                    count++;
                  
                }
                
                
            }

        }
        v.insert(l(s[i]));

        cout<<"OUTOFFOR"<<endl;
        if(count>max1){
            ans=s[i];
        }
        cout<<count<<"count"<<endl;
        max1=max(max1,count);
        cout<<max1<<"max1"<<endl;
    }

return ans;}

// char bruteF(string s){
//     int n=s.length();
//     int max1=INT_MIN;
//     int count=1;
//     char ans=' ';
//     for(int i=0; i<n;i++){
//         count=1;
//         for(int j=0; j<n;j++){
//             if(i!=j){
//                 if(s[i]==s[j]){
//                     count++;
//                 }
                
                
//             }

//         }
//         if(count>max1){
//             ans=s[i];
//         }
//         max1=max(max1,count);
//     }

// return ans;}

int main(){
    string s="aabbbcc";
    char ans=getMaxOccuringChar(s);
    cout<<ans;

}