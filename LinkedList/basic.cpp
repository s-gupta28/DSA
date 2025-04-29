// #include<bits\stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class node{
public:
    int info;
    node* next;

    node(){
        info=0;
        next=nullptr;
    }

    node(int info1){
        info=info1;
        next=nullptr;
    }
};

node* vec2LL(const vector <int> vec){
    
    if(vec.empty()){
        cout<<"vector is empty";
        return 0;
    }
        
        
    node*head=new node(vec[0]);
    node*mover=head;
   
    for(int i=1;i<vec.size();i++){
        node*temp=new node(vec[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
    
}

void displayLL(node*head){
    if(head==nullptr){
        return;
    }

    node*mover=head;
    while(mover!=nullptr){
        cout<<mover->info;
        if(mover->next!=nullptr){
            cout<<"->";
        }
        mover=mover->next;

    }
    cout<<endl;

}

void freeLL(node*head){
    if (head==nullptr){
        cout<<"head empty"<<endl;
        return;
    }
    node*mover=head;
    while(mover!=nullptr){
        node*temp=mover->next;
        delete mover;
        mover=temp;
    }
    head=nullptr;

}

int main(){
    vector <int> vec={0,1,2,3,4};
    node*head=nullptr;
    head=vec2LL(vec);
  
    displayLL(head);
}