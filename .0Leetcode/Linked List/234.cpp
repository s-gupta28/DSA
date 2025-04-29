#include <bits/stdc++.h>
using namespace std;
/*Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
 

Follow up: Could you do it in O(n) time and O(1) space?*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// (head->next != nullptr) is never evaluated if head == nullptr.
//, you must first check that head is not nullptr.

bool bruteforce(ListNode* head) {
    ListNode*mover=head;
    vector<int> dump;
//remember to iterate in while loop
    while(mover!=nullptr){
        dump.push_back(mover->val);
        mover=mover->next; 
    }
   int s=0;
   int e=dump.size()-1;
   while(s<=e){
    if(dump[s]!=dump[e]){
        return false;
    }
    s++;
        e--;
   }
    return true;

        
}
//ERROR! SOLVED
//expression must be a modifiable lvalue
//This error would be generated for the following example as the 
//if conditional contains an assignment which attempts to assign
bool isPalindrome(ListNode* head) {
    if (!head || !head->next) return true;

    // Step 1: Find the middle of the list
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }

    // Step 2: Reverse the second half of the list
    ListNode* prev = nullptr;
    ListNode* curr = slow;
    while (curr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    // Step 3: Compare the two halves
    ListNode* start = head;
    ListNode* end = prev;
    while (end) {
        if (start->val != end->val) return false;
        start = start->next;
        end = end->next;
    }

    return true;
}


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
    vector<int> input = {1,2,2,1};
    ListNode* head = vec2LL(input);

    printList(head);
    
    // bool  ans  = isPalindrome(head);
    
    // cout<<ans<<endl;

    return 0;
}
