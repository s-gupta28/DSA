#include<bits\stdc++.h>
#include<iostream>
using namespace std;

string replaceSpaces(string &s){
    string ans;
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            ans += "@40";

        }
        else{
            ans+=s[i];

        }
    }
return ans;}
    

// string replaceSpaces(string &s){
//     stringstream ss(s);
//     string word;
//     string ans;
//     bool first=true;  // this is sign whether the first word is added or not
//     while(getline(ss, word,' ')){
//         if(!first){
//             ans=ans+"@40";   // this adds the delimiter infront of the word if not first
//         }
//         ans+=word;
//         first=false;  // this tells that the firsat word is added
      

//     }
// return ans;}

int main(){
    string s="Coding Ninjas Is A Coding Platform";
    s=replaceSpaces(s);
    cout<<s<<endl;

    
}