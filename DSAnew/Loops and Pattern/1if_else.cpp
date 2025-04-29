#include<iostream>
using namespace std;

int main(){
   
    /*
A - 65
Z - 90
 a - 97
z - 122
0 - 48
9 - 57*/

char in;
cin >> in;
int as=int(in);

if(as>=65 && as<=90){
    cout<<"This is an uppercase";
}
else if(as>=97 && as<=122){
    cout<<"This is a lowercase";
}
else if(as>=48 && as<=57){
    cout<<"This is a digit";
}
else {
    cout<<"This is a special Symbol";
}
}
