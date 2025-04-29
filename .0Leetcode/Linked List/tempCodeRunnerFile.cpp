bool isPalindrome(ListNode* head) {
    ListNode*mover=head;
    ListNode*s=head;
    ListNode*f=head;
    ListNode*m=nullptr;
    while(f !=nullptr || f->next==nullptr){
    if(f==s){
        m=s;
    }
        f=f->next;
        s=s->next;
    }
    ListNode*prev=nullptr;
    ListNode*curr=head;
    ListNode*next=nullptr;

    // reverse the right part

    ListNode*tail=nullptr;
    while(mover!=nullptr && curr!=nullptr){
        if(mover->next==m){
            prev=mover;
            curr=mover->next;
            

        }
        else{
            continue;
        }
        next=curr->next; 
        curr->next=prev;
        prev=curr;
        curr=next;
        if(mover->next==nullptr){
            mover=tail;

        }

    }

    s=head; // tell m-1;
    ListNode*e=tail; // till m

    while(tail!=m){
        if(s->val!=e->val){
            return false;
        }
        tail=tail->next;
        s=s->next;
    }
    return false;

    
}
