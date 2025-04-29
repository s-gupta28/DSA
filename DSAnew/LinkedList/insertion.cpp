// #include<bits\stdc++.h>
#include <iostream>
#include <vector>
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

// const vector<int> vec cannot modify it after it's initialized ensuring data isn't accidentally changed.
node* vec2LL(const vector<int> vec){ 

    if(vec.empty()){
        return nullptr;
    }
    node*head=new node(vec[0]);
    node*mover=head;
    node*temp=nullptr;       

    for(int i=1; i<vec.size(); i++){
        temp=new node(vec[i]); // address of created node is stored in the var
        mover->next=temp;
        mover=mover->next;
    }
return head;}

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

void clearLL(node*head){
    node*mover=head;
    while(mover!=nullptr){
        node*temp=mover->next;
        delete mover; // node needs tpo cleared in cpp as no garbage collector
        mover=temp;
    }
}

// we return head after insertion because head may chnage is insertion at head


//Node<int>* vs Node*

//Use Node<int>* only if Node is a template.

int main(){
    vector<int> vec={0,1,3,4,5};
    node*head=nullptr;
    head=vec2LL(vec);
    displayLL(head);
    

}
