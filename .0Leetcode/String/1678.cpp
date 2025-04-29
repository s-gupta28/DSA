#include<bits\stdc++.h>
using namespace std;

/* 1678. Goal Parser Interpretation
Easy
Topics
Companies
Hint
You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.

 

Example 1:

Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".
Example 2:

Input: command = "G()()()()(al)"
Output: "Gooooal"
Example 3:

Input: command = "(al)G(al)()()G"
Output: "alGalooG"
 

Constraints:

1 <= command.length <= 100
command consists of "G", "()", and/or "(al)" in some order.*/
string interpret(string command) {
    string s=command;
    string ans="";
        int n=command.size();

        //Learning: i += (len - 1) to balance loop’s i++ and skip full pattern.
        for(int i=0; i<n; i++){
            if(s.substr(i, 1)=="G"){
                ans=ans+"G";
                //auto skip as i++;
            }
            else if(s.substr(i, 2)=="()"){
                ans=ans+"o";
                i+=(2-1);

            }

            else if(s.substr(i, 4)=="(al)"){
                ans=ans+"al";
                i+=(4-1);
            }

            
        }
return ans;}

int main(){
    string s="G()(al)";
    cout<<s[1];
    s=interpret( s);
    
    cout<<s;

}