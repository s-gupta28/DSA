#include<bits\stdc++.h>
using namespace std;


/*🔁 186. Reverse Words in a String II
Difficulty: Medium

🧾 Description:
Given a character array s, reverse the order of the words in-place.

A word is defined as a sequence of non-space characters. The words in s will be separated by a single space. You must perform this operation in-place, without allocating extra space for another array.

🧠 Important Notes:
You cannot allocate extra space (no additional string or array).

Words are separated by exactly one space.

There are no leading or trailing spaces.

All characters in the array are printable ASCII characters.

✅ Example 1:
Input:
s = ["t","h","e"," ","s","k","y"," ","i","s"," ","b","l","u","e"]

Output:
["b","l","u","e"," ","i","s"," ","s","k","y"," ","t","h","e"]

✅ Example 2:
Input:
s = ["a"]
Output:
["a"]

📌 Constraints:
1 <= s.length <= 10⁵

s[i] is an English letter (uppercase or lowercase), digit, or space ' '.

There are at least one word in s.

s does not contain leading or trailing spaces.

All words in s are separated by a single space.

*/



// 💡 Use == for triggers, when you want to act on a condition.
// 💡 Use != or ! for skips, when you want to ignore/filter something.

void reverseWords(vector<char>& s) {
    reverse(s.begin(), s.end()); // Step 1: Reverse entire array

    int s1 = 0;
    int f1 = 0;

    
    while (f1 <=s.size()) {
        if (s[f1] == ' ' || f1==s.size()) {
            reverse(s.begin() + s1, s.begin() + f1);
            s1=f1+1;
            
        }

        f1++;
    }


}


int main(){
    vector<char> s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    reverseWords(s);
    for(char i: s){
        cout<<i<<" ";
    }
    cout<<endl;
}