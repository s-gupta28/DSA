#include<iostream>
#include<bits/stdc++.h>
#include <typeinfo>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
     int a=97;
    unordered_map<char,int> um;

    for(int i=1; i<=26; i++){
        char al= char(a);
        um[al]=i;
        a++;
    }

    //uto take st the data type of each ele pf map
    //first -> key and second-> value here 
   

    // iteratoration 

    //tyoe 1
    // for(auto it = um.begin(); it != um.end(); it++){
    //     cout << it->first << ": " << it->second<< endl;
    // }

// type 2

unordered_map<char, int> :: iterator it= um.begin();
for(it= um.begin(); it!=um.end(); it++ ){
    cout<<it->first<<":"<<it->second<<endl;
}

for (auto i: um){
    cout<< um.first
}
    //delete element
    um.erase('a');

    um.count('a');

    um.count('b');

    //count() checks the presenc ef a  element if present it gives output 1 
    //otherwise if not present output is 0

   

}


