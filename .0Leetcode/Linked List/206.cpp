#include <bits/stdc++.h>
using namespace std;
/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// (head->next != nullptr) is never evaluated if head == nullptr.
//, you must first check that head is not nullptr.

ListNode* reverseList(ListNode* head) {
    ListNode*prev=nullptr;
    ListNode*curr=head;
    ListNode*next=nullptr;

    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
   
return prev;}

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
    vector<int> input = {1,2,3,4,5};
    ListNode* head = vec2LL(input);

    printList(head);
    
    ListNode*head1 = reverseList(head);

    printList(head1);

    return 0;
}
