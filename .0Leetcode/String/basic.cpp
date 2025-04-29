#include <bits/stdc++.h>
#include <string.h>
#include<iostream>
using namespace std;


// ✅ C++ Input Tip:
// cin >> ignores spaces; getline() reads full line.
// After cin >>, use cin.ignore() to remove leftover '\n' before getline().

char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
    }

}
int getLength(char name[]){
    int l=0;
    while(name[l]!='\0'){
        l++;

    }
    return l;

}

int main(){
    // string s;
    // getline(cin,s);  // getline works only for string not for array of char and not for array of string
    // cout<<s;

    // char str[20];
    // cin>> str;
    // cout<<str<<endl;
    // int l=getLength(str);
    // cout<<l<<endl;
 char chr='C';
    char ans=toLowercase('C');
    cout<<ans;
}