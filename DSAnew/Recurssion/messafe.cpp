#include<iostream>
using namespace std;

class Node{
   public:
    void message(){
        cout<<"Hello World"<<endl;
        message1();
    }
    
    void message1(){
        cout<<"Hello World"<<endl;
        message2();
    }
    
    void message2(){
        cout<<"Hello World"<<endl;
        message3();
    }
    
    void message3(){
        cout<<"Hello World"<<endl;
        message4();
    }
    void message4(){
        cout<<"Hello World"<<endl;
    }
    

};

int main(){
    Node x;
    x.message();
    
}