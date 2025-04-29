#include<bits\stdc++.h>
using namespace std;
 

//you have to call one func and it must print hello world 5 times
class Node{
public :

void print1(int n){
    cout<<n<<endl;
    print2(2);
}

void print2(int n){
    cout<<n<<endl;
    print3(3);
}

void print3(int n){
    cout<<n<<endl;
    print4(4);
}

void print4(int n){
    cout<<n<<endl;
    print5(5);
    
}
void print5(int n){
    cout<<n<<endl;
    
}
}x1;

int main(){
    Node x2;
    x2.print1(1);     // memeber function need onject of the class to work

}