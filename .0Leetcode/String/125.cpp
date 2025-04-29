#include<bits\stdc++.h>
#include <cctype> //include this when in need
using namespace std;

/* A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.*/

//"A man, a plan, a canal: Panama""amanaplanacanalpanama"
// bool isPalindrome(string s) {
//     string n="";
//     for(char c: s){
//         if(!(isspace(c))){
//             n=n+(c);
//         }
//     }
//     if(n==""){
//         return true;
//     }
    
//     for(char c: n){
//         if(isalpha(c))  {
//             if(isupper(c)){
//                 n=n+(tolower(c));
//             }
//             else if(islower(c)){
//                 n=n+c;
//             }
//         }
       
                                     
//     }
//     int str=0;
//     int end=n.length()-1;
//     while(str<=end){
//         if(n[str]!=n[end]){
//            return false;
//         }

//         str++;
//         end--;
//     }
//     return true;
// }


// 🧠Tip:Using n += c is better for performance than n = n + c, because the latter creates a new string every time.
// bool isPalindrome(string s) {
//  string n;

//  for(char c:s){
//     if(isalnum(c)){
//         n+=tolower(c); 
//     }
//  }
//  if(n==""){ return true;}

// int str=0;
// int end=n.length()-1;

// while(str<=end){
//     if(n[str]!=n[end]){
// return false;
//     }
//     str++;
//     end--;
// }
// return true;
// }

bool isPalindrome(string s) {

   
   int str=0;
   int end=s.length()-1;
   
   while(str<=end){
    
    if(!isalnum(s[str])){
        str++;
        continue;
    
    }
    
    if(!isalnum(s[end])){
           end--;
            continue;
           
    }

   
        
        if(tolower(s[str])!=tolower(s[end])){
            return false;
        }

        
        str++;
        end--;
    }
    return true;     
    }
  

       

   

   
   


int main(){
    string s="A man, a plan, a canal: Panama";
    bool ans=isPalindrome(s);
    cout<<ans;

}