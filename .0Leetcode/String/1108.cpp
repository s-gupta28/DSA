#include<bits\stdc++.h>
#include<iostream>
using namespace std;


// ✅ char to string:
// Method 1: string(1, ch) → safe & clear
// Method 2: string("") + ch → avoids int promotion
// Method 3: stringstream → flexible, for multiple types

// ❌ ch + "[.]" does NOT work → does pointer arithmetic (not string concat)

// ✅ Use string(1, ch) + "[.]" instead for safe char + string append

 //push_back(char) adds one character. append(string) adds an entire string. Use based on what you're adding.

 //✅ Learned: stringstream + getline() splits a string by a delimiter like . by extracting chunks sequentially from the stream.

string defangIPaddr(string address) {


string s=address;
stringstream ss(s);
string segment;
vector<string> b;
 while(getline(ss,segment,'.')){
    b.push_back(segment);
 }
   
   string ans;
   string temp;
   int n=b.size();

   for(int i=0;i<n;i++){

        ans.append(b[i]);
        
        if(i==n-1){
           break;
        }               
        ans.append("[.]"); 

    }
   

return ans;}


int main(){
    string s= "1.1.1.1";
    string ans=defangIPaddr(s);
    cout<<ans;

}