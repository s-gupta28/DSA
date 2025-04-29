#include<bits\stdc++.h>
using namespace std;
 

//you have to call one func and it must print hello world 5 times
class Node{
public :

void message(){
    cout<<"hello world"<<endl;
    message1();
}

void message1(){
    cout<<"hello world"<<endl;
    message2();
}

void message2(){
    cout<<"hello world"<<endl;
    message3();
}

void message3(){
    cout<<"hello world"<<endl;
    message4();
}

void message4(){
    cout<<"hello world"<<endl;
    
}



}x1;



int main(){
    Node x2;
    x2.message();     // memeber function need onject of the class to work

}