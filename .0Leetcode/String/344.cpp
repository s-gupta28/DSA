#include<bits\stdc++.h>
using namespace std;


void reverseString(vector<char>& s) {
    int s1=0;
    int e1=s.size()-1;

    while(s1<=e1){
        swap(s[s1++],s[e1--]);
    }
        
}

int main(){
    vector<char>s={'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    for(char i: s){
        cout<<i<<" ";
    }
    cout<<endl;
}