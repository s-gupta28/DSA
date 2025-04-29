#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// (head->next != nullptr) is never evaluated if head == nullptr.
//, you must first check that head is not nullptr.

ListNode* bruteforce(ListNode* head){
    if(head==nullptr){
        return nullptr;
    }
    ListNode* mover=head;
    int cnt=0;
    while(mover!=nullptr){
        cnt++;
        mover=mover->next;
    }
    mover=head;
    int mid=(cnt/2)+1; // for 5 -> 3 for 6-> 4
    while(mid!=1){
        mover=mover->next;
        mid--;
    }


return mover;
}

ListNode* middleNode(ListNode* head) {
    if(head==nullptr){
        return nullptr;
    }
    ListNode*f=head;
    ListNode*s=head;

    while( f!=nullptr  && f->next!=nullptr){
       
        s=s->next;
        f=f->next->next;
    }
    
return s;}

// Helper: Convert vector to linked list
ListNode* vec2LL(const vector<int>& vec) {
    if (vec.empty()) return nullptr;
    ListNode* head = new ListNode(vec[0]);
    ListNode* mover = head;
    for (int i = 1; i < vec.size(); ++i) {
        mover->next = new ListNode(vec[i]);
        mover = mover->next;
    }
    return head;
}

// Helper: Print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> input = {1,2,3,4,5,6};
    ListNode* head = vec2LL(input);

    cout << "Original List: ";
    printList(head);

    // Call to middleNode (logic not written yet)
    ListNode* mid = middleNode(head);

    // Placeholder output
    if (mid)
        cout << "Middle Node Value: " << mid->val << endl;
    else
        cout << "Middle Node not implemented yet.\n";

    return 0;
}
